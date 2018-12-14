/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:22:56 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 17:13:26 by frossiny         ###   ########.fr       */
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
	char	*str;
	char	*new;
	size_t	len;
	int		i;
	int		j;

	str = (char *)arg->data.ptr;
	len = ft_strlen(str);
	i = 0;
	if ((new = ft_strnew((arg->width > len) ? arg->width + 1 : len)))
	{
		while (!arg->left && i + len < arg->width)
			new[i++] = ' ';
		j = 0;
		while (str[j])
			new[i++] = str[j++];
		while (arg->left && i < arg->width)
			new[i++] = ' ';
	}
	arg->str = new;
}
