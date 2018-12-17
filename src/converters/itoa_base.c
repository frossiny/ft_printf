/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 15:31:37 by vsaltel           #+#    #+#             */
/*   Updated: 2018/12/17 16:39:27 by vsaltel          ###   ########.fr       */
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

int		size_str(t_arg *list, unsigned long long value2, unsigned int base)
{
	unsigned int		size;

	size = 0;
	if (list->type == 'd')
		while (list->data.ll != 0)
		{
			list->data.ll = list->data.ll / base;
			size++;
		}
	else
		while (list->data.ull > 0)
		{
			list->data.ull = list->data.ull / base;
			size++;
		}
	list->data.ull = value2;
	if (list->positive == -1 || (list->type == 'd' && list->data.ll < 0))
		size++;
	if (list->width > size)
		size = list->width;
	return (size);
}

char	*fill_str(t_arg *list, char *str, unsigned int base, unsigned int *size)
{
	char			*base_str;

	if ((base_str = create_base(base, list->type)) == NULL)
		return (NULL);
	if (list->type == 'd')
	{
		if (list->data.ll < 0)
			list->data.ll = -list->data.ll;
		while (list->data.ll > 0)
		{
			str[*size] = base_str[list->data.ll % base];
			list->data.ll = list->data.ll / base;
			(*size)--;
		}
	}
	else
		while (list->data.ull > 0)
		{
			str[*size] = base_str[list->data.ull % base];
			list->data.ull = list->data.ull / base;
			(*size)--;
		}
	free(base_str);
	return (str);
}

void	itoa_base(t_arg *arg)
{
	char				*str;
	unsigned long long	value2;
	unsigned int		size;
	unsigned int		base;

	base = size_base(arg->type);
	value2 = arg->data.ull;
	size = size_str(arg, value2, base);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return ;
	if (arg->zero == -1)
		ft_memset(str, '0', size);
	else
		ft_memset(str, ' ', size);
	str[size] = '\0';
	size--;
	if (arg->data.ull == 0)
		str[size--] = '0';
	str = fill_str(arg, str, base, &size);
	arg->data.ull = value2;
	if (arg->type == 'd' && arg->data.ll < 0)
		str[size] = '-';
	else if (arg->positive == -1)
		str[size] = '+';
	arg->str = str;
}
