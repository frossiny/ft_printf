/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_filler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:50:59 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/12 14:57:29 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_arg(t_arg *alst, va_list *args)
{
	if (!alst || !args)
		return ;
	if (alst->type == 'd')
		alst->data.ll = va_arg(*args, long long);
	else if (alst->type == 'u' || alst->type == 'o' || alst->type == 'x'
			|| alst->type == 'X')
		alst->data.ull = va_arg(*args, unsigned long long);
	else if (alst->type == 'f')
	{
		if (alst->size == L)
			alst->data.ld = va_arg(*args, long double);
		else
			alst->data.d = va_arg(*args, double);
	}
	else if (alst->type == 'c')
		alst->data.c = va_arg(*args, int);
	else if (alst->type == 's')
		alst->data.ptr = va_arg(*args, char *);
	else if (alst->type == 'p')
		alst->data.ptr = va_arg(*args, void *);
}
