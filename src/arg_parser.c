/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:45:33 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/06 18:00:40 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		parse_flags(char *format, size_t i, t_arg *arg)
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

	new = NULL;
	while (format[*i] && format[*i] != '%')
		(*i)++;
	if (format[(*i)] && format[(*i) + 1] == '%')
		return (parse_arg(format, &(*i++)));
	else
	{
		(*i)++;
		if (!(new = (t_arg *)malloc(sizeof(*new))))
			return (NULL);
		(*i) = parse_flags(format, *i, new);
	}
	return (new);
}

void	parse_args(char *format, t_arg **alst)
{
	size_t	i;
	t_arg	*current;

	i = 0;
	*alst = parse_arg(format, &i);
	current = *alst;
	printf("Index: %lu\n", i);
	printf("Left: %d\n", current->left & 1);
	printf("Zero: %d\n", current->zero & 1);
	printf("Positive: %d\n", current->positive & 1);
	printf("Prefix: %d\n", current->prefix & 1);
	printf("Space: %d\n\n", current->space & 1);
	while (format[i] != '\0')
	{
		printf("Index B: %lu\n", i);
		current->next = parse_arg(format, &i);
		if (current->next)
			current = current->next;
		else
			return ;
		printf("Index: %lu\n", i);
		printf("Left: %d\n", current->left & 1);
		printf("Zero: %d\n", current->zero & 1);
		printf("Positive: %d\n", current->positive & 1);
		printf("Prefix: %d\n", current->prefix & 1);
		printf("Space: %d\n\n", current->space & 1);
	}
}
