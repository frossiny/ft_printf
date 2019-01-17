/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 14:17:25 by vsaltel           #+#    #+#             */
/*   Updated: 2019/01/16 17:39:29 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

# include "ft_printf.h"

typedef struct	s_type
{
	t_arg		*arg;
	void		(*func)(t_arg *arg);
}				t_type;

t_type			g_typelst[] =
{
	{"h", & },		//short
	{"", & },		//int
	{"l", & },		//long
	{"llL", & },	//long long
	{NULL, NULL}
};


#endif
