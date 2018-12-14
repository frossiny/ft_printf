/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:31:09 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 16:16:15 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

#include "ft_printf.h"

typedef struct	s_converter
{
	char		*dtype;
	void		(*func)(t_arg *arg);
}				t_conv;

t_conv			g_convlst[] = 
{
	{"d", &handle_integer},
	{"ouxX", &handle_integer},
	{"c", &handle_char},
	{"s", &handle_str},
	{"p", &handle_ptr}
};

#endif
