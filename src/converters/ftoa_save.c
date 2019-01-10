/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:42 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/19 16:03:17 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long unsigned		ft_pow(int a, int b)
{
	long long unsigned c;

	c = 1;
	while (b--)
		c *= a;
	return (c);
}

int		inttoarg(char buf[], int n, int d)
{
	int i;

	i = 0;
	while (n)
	{
		buf[i++] = '0' + n % 10;
		n /= 10;
	}
	while (i < d)
		buf[i++] = '0';
	buf[i] = '\0';
	ft_strrev(buf);
	return (i);
}

void	handle_float(t_arg *arg)
{
	char	buf[512];
	int		i;
	double	d;

	i = 0;
	if (arg->data.d < 0)
	{
		buf[i++] = '-';
		arg->data.d *= -1;
	}
	if (arg->data.d > 1)
		i += inttoarg(buf + i, (int)arg->data.d, 0);
	else
		buf[i++] = '0';
	if (arg->precision < 0)
		arg->precision = 6;
	if (arg->precision > 0)
	{
		buf[i++] = '.';
		d = (arg->data.d - (int)arg->data.d);
		d = d * ft_pow(10, arg->precision);
		i += inttoarg(buf + i, (int)d, arg->precision);
	}
	if (!arg->left)
		ft_strrev(buf);
	while (i < arg->width)
	{
		buf[i++] = ' ';
	}
	if (!arg->left)
		ft_strrev(buf);
	buf[i] = '\0';
	arg->str = ft_strdup(buf);
}
