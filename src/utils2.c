/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:28:21 by vsaltel           #+#    #+#             */
/*   Updated: 2019/01/17 16:58:57 by vsaltel          ###   ########.fr       */
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
