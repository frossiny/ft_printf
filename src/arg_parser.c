/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:45:33 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/11 14:20:20 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	parse_type(char *format, size_t i, t_arg *arg)
{
	arg->size = none;
	arg->type = '\0';
	if (format[i] == 'h')
		arg->size = (format[i + 1] == 'h') ? hh : h;
	if (arg->size == hh)
		i++;
	else if (format[i] == 'l')
	{
		arg->size = (format[i + 1] == 'l') ? ll : l;
		if (arg->size == ll)
			i++;
	}
	else if (format[i] == 'L')
		arg->size = L;
	if (arg->type != none)
		i++;
	while (format[i] && is_size(format[i]) && !is_type(format[i]))
		i++;
	if (!is_type(format[i]))
		return (-1);
	arg->type = format[i];
	if (arg->type == 'f' && arg->precision == -1)
		arg->precision = 6;
	return (i);
}

size_t	parse_size(char *format, size_t i, t_arg *arg)
{
	int	ret;

	arg->width = 0;
	if (format[i] != '.' && (is_type(format[i]) || is_size(format[i])))
		return (i);
	arg->precision = -1;
	if (format[i] != '.')
	{
		if ((ret = ft_atoi_i(format, &i)) > 0 && format[i] == '.')
		{
			arg->width = ret;
			i++;
		}
		else if (ret > 0)
		{
			arg->width = ret;
			return (i);
		}
		else
			return (i);
	}
	else
		i++;
	if ((ret = ft_atoi_i(format, &i)) > -1)
		arg->precision = ret;
	return (i);
}

size_t	parse_flags(char *format, size_t i, t_arg *arg)
{
	arg->left = 0;
	arg->positive = 0;
	arg->prefix = 0;
	arg->zero = 0;
	arg->space = 0;
	while (is_flag(format[i]))
	{
		if (format[i] == '-')
			arg->left = 1;
		else if (format[i] == '+')
			arg->positive = 1;
		else if (format[i] == '#')
			arg->prefix = 1;
		else if (format[i] == ' ')
			arg->space = 1;
		else if (format[i] == '0')
			arg->zero = 1;
		else
			return (i);
		i++;
	}
	return (i);
}

t_arg	*parse_arg(char *format, size_t *i)
{
	t_arg	*new;

	while (format[*i] && format[*i] != '%')
		(*i)++;
	if (format[*i] == '\0')
		return (NULL);
	else if (format[(*i) + 1] && format[(*i) + 1] == '%')
	{
		(*i) += 2;
		return (parse_arg(format, i));
	}
	else
	{
		if (!(new = (t_arg *)malloc(sizeof(*new))))
			return (NULL);
		new->index = (*i)++;
		new->precision = -1;
		(*i) = parse_flags(format, *i, new);
		(*i) = parse_size(format, *i, new);
		if (((*i) = parse_type(format, *i, new)) == -1)
		{
			free(new);
			return (NULL);
		}
		new->end = *i;
	}
	return (new);
}

void	parse_args(char *format, t_arg **alst, va_list *args)
{
	size_t	i;
	t_arg	*current;
	t_arg	*new;

	i = 0;
	*alst = parse_arg(format, &i);
	current = *alst;
	if (!current)
		return ;
	fill_arg(current, args);
	/*printf("Index: %lu = %s\n", current->index, format + current->index);
	printf("Type: %c\n", current->type);
	printf("Left: %d\n", current->left & 1);
	printf("Zero: %d\n", current->zero & 1);
	printf("Positive: %d\n", current->positive & 1);
	printf("Prefix: %d\n", current->prefix & 1);
	printf("Space: %d\n", current->space & 1);
	printf("Precision: %d\n", current->precision);
	printf("Width: %d\n", current->width);
	printf("Size: %d\n\n", (int)current->size);*/
	while (format[i] != '\0')
	{
		current->next = parse_arg(format, &i);
		if (current->next == NULL)
			return ;
		current = current->next;
		fill_arg(current, args);
		/*printf("Index: %lu = %s\n", current->index, format + current->index);
		printf("Type: %c\n", current->type);
		printf("Left: %d\n", current->left & 1);
		printf("Zero: %d\n", current->zero & 1);
		printf("Positive: %d\n", current->positive & 1);
		printf("Prefix: %d\n", current->prefix & 1);
		printf("Space: %d\n", current->space & 1);
		printf("Precision: %d\n", current->precision);
		printf("Width: %d\n", current->width);
		printf("Size: %d\n\n", (int)current->size);*/
	}
}
