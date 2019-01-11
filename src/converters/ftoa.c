/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:42 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/11 16:48:19 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					handle_exceptions(t_arg *arg)
{
	int		sign;

	sign = (arg->data.ull & 0x8000000000000000) > 0;
	if ((arg->data.ull & 0x7FFFFFFFFFFFFFFF) == 0x7FF0000000000000)
	{
		if (sign)
			arg->str = ft_strdup("-inf");
		else
			arg->str = ft_strdup("inf");
		return (1);
	}
	else if (((arg->data.ull & 0x7FFFFFFFFFFFFFFF) >> 52) == 0x7FF)
	{
		arg->str = ft_strdup("nan");
		return (1);
	}
	return (0);
}

unsigned long long	ft_round(double d, int precision)
{
	long double	ld;

	ld = d;
	while (precision--)
		ld *= 10;
	if (ld > 0)
		ld += 0.5;
	else if (ld < 0)
		ld -= 0.5;
	return ((unsigned long long)ld);
}

long				numtoarg(char buf[], unsigned long long n, int d)
{
	long	i;

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

void				pad(char buf[], int *i, t_arg *arg)
{
	if (!arg->left)
		ft_strrev(buf);
	while (*i < arg->width)
	{
		buf[*i++] = ' ';
	}
	if (!arg->left)
		ft_strrev(buf);
}

void				handle_float(t_arg *arg)
{
	char	buf[512];
	int		i;
	double	d;

	if (handle_exceptions(arg))
		return ;
	i = 0;
	if (arg->data.ull & 0x8000000000000000)
	{
		buf[i++] = '-';
		arg->data.d *= -1;
	}
	if (arg->data.d > 1)
		i += numtoarg(buf + i, (long long)arg->data.d, 0);
	else
		buf[i++] = '0';
	if (arg->precision > 0)
	{
		buf[i++] = '.';
		d = (arg->data.d - (long long)arg->data.d);
		i += numtoarg(buf + i, ft_round(d, arg->precision), arg->precision);
	}
	pad(buf, &i, arg);
	buf[i] = '\0';
	arg->str = ft_strdup(buf);
}
