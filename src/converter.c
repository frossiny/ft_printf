/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:33:18 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 16:20:02 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "converter.h"

void	convert(t_arg *arg)
{
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_strchr(g_convlst[i].dtype, arg->type))
		{
			g_convlst[i].func(arg);
			break ;
		}
		i++;
	}
}
