/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:45:31 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/06 17:07:14 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "string.h"

int		ft_printf(char *format, ...)
{
	va_list	arg;
	int		i;
	char	*buf[BUFF_SIZE + 1];
	t_arg	*alst;

	i = 0;
	printf("Format: %s\n", format);
	parse_args(format, &alst);
	/*va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				char *s = va_arg(arg, char *);
				write(1, s, strlen(s));
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				char c = va_arg(arg, int);
				write(1, &c, 1);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				i++;
			}
			else
				write(1, "unknown", 7);
		}
		else
			write(1, format + i, 1);
		i++;
	}*/
	return (0);
}
