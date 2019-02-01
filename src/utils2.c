/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:28:21 by vsaltel           #+#    #+#             */
/*   Updated: 2019/02/01 17:17:42 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		size_base(char c)
{
	if (c == 'b')
		return (2);
	if (c == 'o')
		return (8);
	if (c == 'u' || c == 'd' || c == 'i')
		return (10);
	if (c == 'x' || c == 'X')
		return (16);
	return (0);
}

char	*create_base(unsigned int base, char maj)
{
	char	*str;
	int		x;
	char	c;

	if (base < 2)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * base + 1)))
		return (NULL);
	x = 0;
	c = '0';
	while (base > 0)
	{
		str[x] = c;
		c++;
		if (c == ':' && maj == 'X')
			c = 'A';
		else if (c == ':')
			c = 'a';
		x++;
		base--;
	}
	str[x] = '\0';
	return (str);
}

int		is_infinite(t_arg *arg)
{
	long	expo;
	long	mantissa;

	expo = arg->data.bin >> (arg->size == none ? 52 : 64);
	expo &= (arg->size == none ? 0x7FF : 0x7FFF);
	mantissa = arg->data.bin;
	mantissa &= (arg->size == none ? 0xFFFFFFFFFFFFF : 0xFFFFFFFFFFFFFFFF);
	if (arg->size == none)
		return (expo == 0x7FF && mantissa == 0);
	else
		return (expo == 0x7FFF && mantissa == 0);
}

int		is_nan(t_arg *arg)
{
	long	expo;
	long	mantissa;

	expo = arg->data.bin >> (arg->size == none ? 52 : 64);
	expo &= (arg->size == none ? 0x7FF : 0x7FFF);
	mantissa = arg->data.bin;
	mantissa &= (arg->size == none ? 0xFFFFFFFFFFFFF : 0xFFFFFFFFFFFFFFFF);
	if (arg->size == none)
		return (expo == 0x7FF && mantissa);
	else
		return (expo == 0x7FFF && mantissa);
}
