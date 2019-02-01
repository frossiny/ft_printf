/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:45:33 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/01 17:18:12 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_type(char *format, size_t i, t_arg *arg)
{
	while (format[i] != '\0' && is_flag(format[i]))
		i++;
	while (format[i] && (ft_isdigit(format[i]) || format[i] == '.'))
		i++;
	arg->size = none;
	arg->type = '\0';
	if (format[i] == 'h')
		arg->size = (format[i + 1] == 'h') ? hh : h;
	else if (format[i] == 'l')
		arg->size = (format[i + 1] == 'l') ? ll : l;
	else if (format[i] == 'L')
		arg->size = L;
	if (arg->size != none)
		i += (arg->size == hh || arg->size == ll) ? 2 : 1;
	while (format[i] && is_size(format[i]))
		i++;
	if (format[i] == '\0')
		arg->end = i - 1;
	else
		arg->end = i;
	arg->type = format[i];
}

void	parse_size(char *format, size_t i, t_arg *arg)
{
	arg->width = 0;
	arg->precision = -1;
	while (format[i] != '\0' && is_flag(format[i]))
		i++;
	if (format[i] == '\0' ||
			(format[i] != '.' && (is_type(format[i]) || is_size(format[i]))))
		return ;
	if (format[i] == '.')
	{
		i++;
		arg->precision = ft_atoi_i(format, &i);
		return ;
	}
	arg->width = ft_atoi_i(format, &i);
	if (format[i] == '.')
	{
		i++;
		arg->precision = ft_atoi_i(format, &i);
	}
}

void	parse_flags(char *format, size_t i, t_arg *arg)
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
		else if (format[i] == '0' && ((arg->type != 'd' && arg->type != 'i'
								&& arg->type != 'u') || arg->precision == -1))
			arg->zero = 1;
		i++;
	}
	if (arg->left)
		arg->zero = 0;
}

t_arg	*parse_arg(char *format, size_t i)
{
	t_arg	*new;

	if (format[i] == '\0')
		return (NULL);
	else
	{
		while (format[i] && format[i] != '%')
			i++;
		if (!format[i] || !(new = (t_arg *)malloc(sizeof(*new))))
			return (NULL);
		new->str = NULL;
		new->next = NULL;
		new->index = i++;
		parse_type(format, i, new);
		parse_size(format, i, new);
		parse_flags(format, i, new);
		if ((new->type == 'f' || new->type == 'F') && new->precision == -1)
			new->precision = 6;
	}
	return (new);
}

void	parse_args(char *format, t_arg **alst, va_list *args)
{
	size_t	i;
	t_arg	*current;

	i = 0;
	*alst = parse_arg(format, i);
	current = *alst;
	if (!current)
		return ;
	i = current->end + 1;
	fill_arg(current, args);
	while (format[i] != '\0')
	{
		current->next = parse_arg(format, i);
		if (current->next == NULL)
			return ;
		current = current->next;
		i = current->end + 1;
		fill_arg(current, args);
	}
}
