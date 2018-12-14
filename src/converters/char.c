/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:22:56 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 15:12:27 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_char(t_arg *arg)
{
	char	*str;

	str = ft_strnew(1);
	ft_memcpy(str, &arg->data.c, 1);
	str[1] = '\0';
	arg->str = str;
}

void	handle_str(t_arg *arg)
{
	arg->str = ft_strdup((char *)arg->data.ptr);
}
