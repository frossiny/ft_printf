/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:28:21 by vsaltel           #+#    #+#             */
/*   Updated: 2018/12/19 16:32:46 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		size_base(char c)
{
	if (c == 'b')
		return (2);
	if (c == 'o')
		return (8);
	if (c == 'u' || c == 'd')
		return (10);
	if (c == 'x' || c == 'X')
		return (16);
	return (0);
}
