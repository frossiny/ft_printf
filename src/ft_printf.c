/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:45:31 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/07 17:21:18 by frossiny         ###   ########.fr       */
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
	int		i;

	printf("Format: %s\n", format);
	parse_args(format, &alst);
	va_start(arg, format);
	nexta = format;
	i = 0;
	while (*format)
	{
		nexta = format + alst->index;
		printf("Now:  %s\n", format);
		printf("Next: %s\n", nexta);
		if (*format == '%' && *(format + 1) != '%')
		{
			//Get handler
			//Call handler
			nexta+=2;
		}
		else
		{
			if (nexta)
				while (format < nexta)
					buf[i++] = *(format++);
			else
			{
				while (format < format + ft_strlen(format))
					buf[i++] = *(format++);
				break ;
			}
			nexta++;
			if (*nexta == '%')
			{
				buf[i++] = '%';
				nexta++;
			}
		}
		format = nexta;
	}
	buf[i] = '\0';
	va_end(arg);
	del_list(&alst);
	printf("%s\n", buf);
	return (0);
}
