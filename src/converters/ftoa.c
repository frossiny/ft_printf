/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:42 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/10 12:23:10 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_float(t_arg *arg)
{
	char	buf[512];
	
	int i = 0;
	ft_memset(buf, '0', 511);
	while (i < 66)
	{
		if (i == 64 || i == 52)
			buf[i++] = ' ';
		buf[i++] = '0' + (arg->data.ull & 1);
		arg->data.ull >>= 1;
	}
	buf[i] = '\0';
	arg->str = ft_strdup(ft_strrev(buf));
}
