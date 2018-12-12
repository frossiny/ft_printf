/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:45:31 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/12 15:23:50 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "string.h"

int		ft_printf(char *format, ...)
{
	va_list	arg;
	char	buf[BUFF_SIZE + 1];
	char	*nexta;
	t_arg	*alst;
	t_arg	*current;
	int		i;

	printf("Format: %s - Struct size: %lu\n", format, sizeof(t_arg));
	va_start(arg, format);
	parse_args(format, &alst, &arg);
	nexta = format;
	i = 0;
	current = alst;
	while (current)
	{
		if (current->type == 'd')
			printf("Int: %lld\n", current->data.ll);
		else if (current->type == 'u' || current->type == 'o' || current->type == 'x'
				|| current->type == 'X')
			printf("Unsigned: %llu\n", current->data.ull);
		else if (current->type == 'f')
		{
			if (current->size == L)
				printf("Long float: %.10Lf\n", current->data.ld);
			else
				printf("Float: %f\n", current->data.d);
		}
		else if (current->type == 'c')
			printf("Char: %c\n", current->data.c);
		else if (current->type == 's')
			printf("String: %s\n", (char *)current->data.ptr);
		current = current->next;
	}
	buf[i] = '\0';
	va_end(arg);
	del_list(&alst);
	printf("%s\n", buf);
	return (0);
}
