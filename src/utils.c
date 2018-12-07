/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:51:59 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/07 14:10:41 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_flag(char c)
{
	return (c == '-' || c == '+' || c == '#' || c == ' ' || c == '0');
}

int		is_size(char c)
{
	return (c == 'h' || c == 'l' || c == 'j' || c == 't' || c == 'z');
}

int		is_type(char c)
{
	return (c == 'd' || c == 'i' || c == 'o' || c == 'u' 
		|| c == 'x' || c == 'X' || c == 'c' || c == 's' || c == 'p');
}

void	del_list(t_arg **alst)
{
	t_arg	*next;

	while (*alst)
	{
		next = (*alst)->next;
		free(*alst);
		*alst = next;
	}
	*alst = NULL;
}
