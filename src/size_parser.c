/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:36:30 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/11 12:36:30 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_arg(char *format, t_arg *arg, int isWidth, int *i)
{
	if (isWidth)
	{
		if (format[*i] == '*')
		{
			arg->width = -2;
			arg->skipArgs++;
			(*i)++;
		}
		else
			arg->width = ft_atoi_i(format, i);
	}
	else
	{
		if (format[*i] == '*')
		{
			arg->precision = -2;
			arg->skipArgs++;
			(*i)++;
		}
		else
			arg->precision = ft_atoi_i(format, i);
	}
}

void		parse_size(char *format, size_t i, t_arg *arg)
{
	arg->width = 0;
	arg->precision = -1;
	while (format[i] != '\0' && is_flag(format[i]))
		i++;
	if ((format[i] != '.' || format[i] != '*') &&
							(is_type(format[i]) || is_size(format[i])))
		return ;
	if (format[i] == '.')
	{
		i++;
		get_arg(format, arg, 0, &i);
		return ;
	}
	get_arg(format, arg, 1, &i);
	if (format[i] == '*')
		get_arg(format, arg, 1, &i);
	else if (ft_isdigit(format[i]))
		arg->width = ft_atoi_i(format, &i);
	if (format[i] == '.')
	{
		i++;
		get_arg(format, arg, 0, &i);
	}
}
 