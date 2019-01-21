/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:06:21 by vsaltel           #+#    #+#             */
/*   Updated: 2019/01/21 15:08:15 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		size_str(t_arg *list, unsigned int base, unsigned int *size)
{
	unsigned long long 	value2;

	value2 = list->data.ull;
	*size = 0;
	
	if (list->data.ull == 0 && list->precision != 0)
		(*size)++;
	while (list->data.ull > 0)
	{
		list->data.ull = list->data.ull / base;
		(*size)++;
	}
	list->data.ull = value2;
	if (list->precision > *size && list->precision != -1)
	{
		list->prefix = 0;
		*size = list->precision;
	}
	if (list->prefix == -1 && list->type == 'o' && list->data.ull)
		(*size)++;
	else if (list->prefix == -1 && list->data.ull != 0 && (list->type == 'x' || list->type == 'X'))
		*size = *size + 2;
	return (*size);
}

char	*fill_str(t_arg *list, unsigned int base, unsigned int *size)
{
	char			*base_str;
	int				nb;

	nb = 0;
	if (list->data.ull == 0)
		nb++;
	if ((base_str = create_base(base, list->type)) == NULL)
		return (NULL);
	while (list->data.ull > 0)
	{
		list->str[(*size)--] = base_str[list->data.ull % base];
		list->data.ull = list->data.ull / base;
		nb++;
	}
	while (nb++ < list->precision && list->precision != -1)
	{
		list->prefix = 0;
		list->str[(*size)--] = '0';
	}
	free(base_str);
	return (list->str);
}

char	*fill_option(t_arg *arg, char *str, int size)
{
	if ((arg->type == 'x' || arg->type == 'X') && arg->zero == -1
			&& arg->prefix == -1 && arg->data.ull != 0)
	{
		str[1] = 'x';
		if (arg->type == 'X')
			str[1] = 'X';
		str[0] = '0';
	}
	else if ((arg->type == 'x' || arg->type == 'X') && arg->prefix == -1
			&& arg->data.ull != 0)
	{
		str[size] = 'x';
		if (arg->type == 'X')
			str[size] = 'X';
		str[size - 1] = '0';
	}
	else if (arg->type == 'o' && arg->prefix == -1)
		str[size] = '0';
	return (str);
}

void	itoa_base_unsigned(t_arg *arg)
{
	unsigned long long	value2;
	unsigned int		size;
	unsigned int		base;

	base = size_base(arg->type);
	value2 = arg->data.ull;
	size = size_str(arg, base, &size);
	if (arg->width > size)
		size = arg->width;
	if (!(arg->str = (char *)malloc(sizeof(char) * size + 1)))
		return ;
	ft_memset(arg->str, (arg->zero == -1 && arg->left == 0) ? '0' : ' ', size);
	arg->str[size--] = '\0';
	if (arg->left == -1)
		size = size_str(arg, base, &size) - 1;
	if (arg->data.ull == 0 && arg->precision != 0)
		arg->str[size--] = '0';
	arg->str = fill_str(arg, base, &size);
	arg->data.ull = value2;
	arg->str = fill_option(arg, arg->str, size);
}