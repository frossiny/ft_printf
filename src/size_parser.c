/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:36:30 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/11 22:50:20 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_arg(char *format, t_arg *arg, int isWidth, size_t *i)
{
	if (isWidth)
	{
		if (format[*i] == '*')
		{
			arg->width = -2;
			(*i)++;
		}
		else
		{
			if (arg->width == -2)
				arg->skipArgs |= 1;
			arg->width = ft_atoi_i(format, i);
		}
	}
	else
	{
		if (format[*i] == '*')
		{
			if (arg->precision > -1 && arg->skipArgs)
				arg->skipArgs |= 4;
			arg->precision = -2;
			(*i)++;
		}
		else
		{
			if (arg->precision == -2)
			{
				if (arg->skipArgs)
					arg->skipArgs |= 2;
				arg->skipArgs |= 1;
			}
			arg->precision = ft_atoi_i(format, i);
		}
	}
}

void		parse_size(char *format, size_t i, t_arg *arg)
{
	arg->width = 0;
	arg->precision = -1;
	arg->skipArgs = 0;
	while (format[i] != '\0' && is_flag(format[i]))
		i++;
	if ((format[i] != '.' || format[i] != '*') &&
							(is_type(format[i]) || is_size(format[i])))
		return ;
	if (format[i] != '.')
		while (format[i] == '*' || ft_isdigit(format[i]))
			get_arg(format, arg, 1, &i);
	if (format[i] == '.')
	{
		i++;
		get_arg(format, arg, 0, &i);
		if (arg->width && (format[i] == '*' || ft_isdigit(format[i])))
			arg->skipArgs |= 4;
	}
}
 