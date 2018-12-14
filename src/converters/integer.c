/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:45 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 15:43:53 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi_i(const char *str, size_t *i)
{
	long	val;

	val = 0;
	while (ft_isspace(str[*i]))
		(*i)++;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		val = (val * 10) + str[*i] - '0';
		if (val < 0)
			return (0);
		(*i)++;
	}
	return ((int)val);
}

void	handle_integer(t_arg *arg)
{
	char	buf[(arg->width > 12) ? arg->width + 1 : 13];
	int		i;
	int		sign;
	long	nu;

	nu = (int)arg->data.ll;
	i = 0;
	sign = 0;
	if (nu < 0)
	{
		sign = 1;
		nu *= -1;
	}
	while (nu > 9)
	{
		buf[i++] = '0' + nu % 10;
		printf("BUF: %s\n", buf);
		nu /= 10;
	}
	buf[i++] = '0' + nu % 10;
	while (i < arg->width)
		buf[i++] = (arg->zero) ? '0' : ' ';
	if (sign)
		buf[i++] = '-';
	else if (arg->positive)
		buf[i++] = '+';
	buf[i] = '\0';
	ft_strrev(buf);
	arg->str = ft_strdup(buf);
}
