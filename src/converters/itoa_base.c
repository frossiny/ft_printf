/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 15:31:37 by vsaltel           #+#    #+#             */
/*   Updated: 2019/01/15 15:20:37 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	if (list->data.ull == 0)
		size++;
	if (list->type == 'd')
		while (list->data.ll != 0)
		{
			list->data.ll = list->data.ll / base;
			size++;
		}
	while (list->data.ull > 0)
	{
		list->data.ull = list->data.ull / base;
		size++;
	}
	list->data.ull = value2;
	if ((list->positive == -1 || list->data.ll < 0 || list->space == -1)
			&& list->type == 'd')
		size++;
	if (list->prefix == -1 && list->type == 'o')
		size++;
	else if (list->prefix == -1 && (list->type == 'x' || list->type == 'X'))
		size = size + 2;
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

char	*fill_option(t_arg *arg, char *str, int size)
{
	if (arg->type == 'd' && arg->data.ll < 0 && arg->zero == -1)
		str[0] = '-';
	else if (arg->type == 'd' && arg->data.ll < 0)
		str[size] = '-';
	if (arg->type == 'd' && arg->positive == -1 && arg->zero == -1)
		str[0] = '+';
	else if (arg->type == 'd' && arg->positive == -1)
		str[size] = '+';
	if (arg->type == 'd' && arg->space == -1 && arg->zero == -1)
		str[0] = ' ';
	else if (arg->type == 'd' && arg->space == -1)
		str[size] = ' ';
	if ((arg->type == 'x' || arg->type == 'X') && arg->zero == -1
			&& arg->prefix == -1)
		str[1] = 'x';
	else if ((arg->type == 'x' || arg->type == 'X') && arg->prefix == -1)
	{
		str[size] = 'x';
		if (arg->type == 'X')
			str[size] = 'X';
		str[size - 1] = '0';
	}
	if (arg->type == 'o' && arg->prefix == -1)
		str[size] = '0';
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
	if (arg->width > size)
		size = arg->width;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return ;
	ft_memset(str, (arg->zero == -1 && arg->left == 0) ? '0' : ' ', size);
	str[size--] = '\0';
	if (arg->left == -1)
		size = size_str(arg, value2, base) - 1;
	if (arg->data.ull == 0)
		str[size--] = '0';
	str = fill_str(arg, str, base, &size);
	arg->data.ull = value2;
	str = fill_option(arg, str, size);
	arg->str = str;
}