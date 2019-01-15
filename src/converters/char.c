/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:22:56 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/15 15:19:34 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_modulo(t_arg *arg)
{
	char	*str;
	int		i;

	str = ft_strnew(arg->width + 1);
	if (!str)
		arg->str = ft_strdup("%");
	else
	{
		i = 0;
		while (i < arg->width - 1)
		{
			str[i++] = arg->zero ? '0' : ' ';
		}
		str[i++] = '%';
		str[i] = '\0';
		if (arg->left)
			ft_strrev(str);
		arg->str = str;
	}
}

void	handle_char(t_arg *arg)
{
	char	*str;
	int		i;

	i = 0;
	if (str = ft_strnew(arg->width + 1))
	{
		ft_memset(str, ' ', arg->width - 1);
		ft_strncat(str, &arg->data.c, 1);
		str[ft_strlen(str)] = '\0';
		if (arg->left)
			ft_strrev(str);
	}
	else
		str = ft_strdup("");
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
	if (!str)
	{
		arg->str = ft_strdup("(null)");
		return ;
	}
	len = ft_strlen(str);
	if (arg->precision > -1 && len > arg->precision)
		len = arg->precision;
	i = 0;
	if ((new = ft_strnew((arg->width > len) ? arg->width + 1 : len)))
	{
		while (!arg->left && i + len < arg->width)
			new[i++] = ' ';
		j = 0;
		while (str[j] && j < len)
			new[i++] = str[j++];
		while (arg->left && i < arg->width)
			new[i++] = ' ';
	}
	else
		new = ft_strdup("");
	arg->str = new;
}
