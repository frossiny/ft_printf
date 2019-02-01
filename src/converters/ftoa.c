/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:42 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/01 16:52:33 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				handle_exceptions(t_arg *arg, char buf[])
{
	int		sign;
	int		i;

	sign = (arg->data.bin >> (arg->size == none ? 63 : 79)) & 1;
	if (is_infinite(arg))
	{
		if (arg->type == 'F')
			arg->str = ft_strdup(sign ? "-INF" : "INF");
		else
			arg->str = ft_strdup(sign ? "-inf" : "inf");
		return (1);
	}
	else if (is_nan(arg))
	{
		i = 3;
		ft_memcpy(buf, arg->type == 'f' ? "nan" : "NAN", 4);
		while (i < arg->width)
			buf[i++] = ' ';
		buf[i] = '\0';
		if (!arg->left)
			ft_strrev(buf);
		arg->str = ft_strdup(buf);
		return (1);
	}
	return (0);
}

__int128_t		fro(long double d, int precision)
{
	long double	ld;

	ld = d;
	while (precision--)
		ld *= 10;
	ld += (ld > 0) ? 0.5 : -0.5;
	return ((__int128_t)ld);
}

__int128_t		numtoarg(char buf[], __int128_t n, size_t d)
{
	size_t	i;

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

void			pad(char buf[], size_t *i, t_arg *arg)
{
	if (arg->prefix && arg->precision == 0)
		buf[(*i)++] = '.';
	buf[*i] = '\0';
	ft_strrev(buf);
	while (*i < (size_t)arg->width - (arg->positive || arg->space) && arg->zero)
		buf[(*i)++] = '0';
	if ((arg->positive || arg->space) && !(arg->data.ull & 0x8000000000000000))
		buf[(*i)++] = arg->positive ? '+' : ' ';
	buf[*i] = '\0';
	ft_strrev(buf);
	if (!arg->left)
		ft_strrev(buf);
	while (*i < (size_t)arg->width && !arg->zero)
		buf[(*i)++] = ' ';
	buf[*i] = '\0';
	if (!arg->left)
		ft_strrev(buf);
}

void			handle_float(t_arg *arg)
{
	char		buf[512];
	size_t		i;
	long double	d;

	if (handle_exceptions(arg, buf))
		return ;
	i = 0;
	d = arg->size == none ? (long double)arg->data.d : arg->data.ld;
	if ((arg->data.bin >> (arg->size == none ? 63 : 79)) & 1)
		d *= -1;
	if ((arg->data.bin >> (arg->size == none ? 63 : 79)) & 1)
		buf[i++] = '-';
	if (d >= 1)
		i += numtoarg(buf + i, fro(!arg->precision ? d : (__int128_t)d, 0), 0);
	else
		buf[i++] = '0';
	if (arg->precision > 0)
	{
		buf[i++] = '.';
		i += numtoarg(buf + i,
			fro((d - (__int128_t)d), arg->precision), arg->precision);
	}
	buf[i] = '\0';
	pad(buf, &i, arg);
	arg->str = ft_strdup(buf);
}
