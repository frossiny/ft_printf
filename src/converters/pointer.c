/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:00:13 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/21 17:34:09 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_ptr(t_arg *arg)
{
	const char			hex[] = "0123456789abcdef";
	char				buf[(arg->width > 18) ? arg->width + 1 : 19];
	int					i;

	i = 0;
	while (arg->data.ull > 0)
	{
		buf[i++] = hex[arg->data.ull % 16];
		arg->data.ull /= 16;
	}
	if (i == 0 && arg->precision == -1)
		buf[i++] = '0';
	while (i < arg->precision)
		buf[i++] = '0';
	buf[i++] = 'x';
	buf[i++] = '0';
	while (!arg->left && i < arg->width)
		buf[i++] = ' ';
	buf[i] = '\0';
	ft_strrev(buf);
	while (arg->left && i < arg->width)
		buf[i++] = ' ';
	buf[i] = '\0';
	arg->str = ft_strdup(buf);
}
