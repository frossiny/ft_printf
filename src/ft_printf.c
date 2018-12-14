/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:45:31 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 15:48:28 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "string.h"

size_t	write_buf(char buf[], int *i)
{
	write(1, buf, *i);
	ft_bzero(buf, BUFF_SIZE);
	*i = 0;
	return (0);
}

size_t	write_all(char *format, t_arg *alst)
{
	char	buf[BUFF_SIZE + 1];
	int		i;
	int		j;
	size_t	c;
	
	i = 0;
	j = 0;
	c = 0;
	while (format[i])
	{
		if (alst)
		{
			while (i < alst->index)
			{
				buf[j++] = format[i++];
				if (j == BUFF_SIZE)
					c+= write_buf(buf, &j);
			}
			buf[j] = '\0';
			if (alst->str)
			{
				if (j + ft_strlen(alst->str) >= BUFF_SIZE)
					c += write_buf(buf, &j);
				j += ft_strcat_c(buf, alst->str, j);
				i = alst->end + 1;
				alst = alst->next;
			}
		}
		else
		{
			c += write_buf(buf, &j);
			write(1, format + i, ft_strlen(format + i));
			return (c + ft_strlen(format + i));
		}
	}
	c += write_buf(buf, &j);
	return (c);
}

int		ft_printf(char *format, ...)
{
	va_list	arg;
	t_arg	*alst;

	va_start(arg, format);
	parse_args(format, &alst, &arg);
	if (alst == NULL)
		return (write(1, format, ft_strlen(format)));
	write_all(format, alst);
	va_end(arg);
	del_list(&alst);
	return (0);
}
