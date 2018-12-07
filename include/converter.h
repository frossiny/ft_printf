/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:31:09 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/07 16:44:16 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

#include "ft_printf.h"

typedef struct	s_converter
{
	char		dtype;
	size_t		(*func)(char gbuf[], t_arg *arg, void *data);
}				t_conv;

t_conv			g_convlst[] = 
{
	{'d', &handle_integer}
};

#endif
