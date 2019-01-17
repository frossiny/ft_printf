/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 15:31:37 by vsaltel           #+#    #+#             */
/*   Updated: 2019/01/17 15:41:39 by vsaltel          ###   ########.fr       */
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
	if (list->type == 'd')
		while (list->data.ll != 0)
		{
			list->data.ll = list->data.ll / base;
			(*size)++;
		}
	while (list->data.ull > 0)
	{
		list->data.ull = list->data.ull / base;
		(*size)++;
	}
	list->data.ull = value2;
	if (list->precision > *size && list->precision != -1)
		*size = list->precision;
	if ((list->positive == -1 || list->data.ll < 0 || list->space == -1)
			&& list->type == 'd')
		(*size)++;
	if (list->prefix == -1 && list->type == 'o')
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
	if (list->type == 'd')
	{
		if (list->data.ll < 0)
			list->data.ll = -list->data.ll;
		while (list->data.ll > 0)
		{
			list->str[(*size)--] = base_str[list->data.ll % base];
			list->data.ll = list->data.ll / base;
			nb++;
		}
	}
	else
		while (list->data.ull > 0)
		{
			list->str[(*size)--] = base_str[list->data.ull % base];
			list->data.ull = list->data.ull / base;
			nb++;
		}
	while (nb++ < list->precision && list->precision != -1)
		list->str[(*size)--] = '0';
	free(base_str);
	return (list->str);
}

char	*fill_option(t_arg *arg, char *str, int size)
{
	if (arg->type == 'd' && arg->data.ll < 0 && arg->zero == -1)
		str[0] = '-';
	else if (arg->type == 'd' && arg->data.ll < 0)
		str[size] = '-';
	else if (arg->type == 'd' && arg->positive == -1 && arg->zero == -1)
		str[0] = '+';
	else if (arg->type == 'd' && arg->positive == -1)
		str[size] = '+';
	else if (arg->type == 'd' && arg->space == -1 && arg->zero == -1)
		str[0] = ' ';
	else if (arg->type == 'd' && arg->space == -1)
		str[size] = ' ';
	else if ((arg->type == 'x' || arg->type == 'X') && arg->zero == -1
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

void	itoa_base(t_arg *arg)
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
