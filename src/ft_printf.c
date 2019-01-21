/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:45:31 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/21 17:35:46 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	write_buf(char buf[], int *i)
{
	int c;

	c = *i;
	write(1, buf, c);
	buf[0] = '\0';
	*i = 0;
	return (c);
}

size_t	write_arg(char buf[], t_arg *arg, int start, size_t *count)
{
	size_t	str_len;

	if (!arg || arg->str == NULL)
		return (start);
	str_len = ft_strlen(arg->str);
	if (arg->type == 'c' && arg->data.c == 0)
	{
		*count += write_buf(buf, &start);
		*count += write(1, arg->str, arg->width == 0 ? 1 : arg->width);
		return (start);
	}
	if (str_len >= BUFF_SIZE)
	{
		*count += write_buf(buf, &start);
		*count += write(1, arg->str, str_len);
		return (start);
	}
	if (start + ft_strlen(arg->str) >= BUFF_SIZE)
		*count += write_buf(buf, &start);
	ft_strcat(buf + start, arg->str);
	start = ft_strlen(buf);
	return (start);
}

size_t	write_end(char buf[], char *format, int j, size_t c)
{
	if (ft_strlen(buf) > 0)
		c += write_buf(buf, &j);
	write(1, format, ft_strlen(format));
	return (c + ft_strlen(format));
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
	buf[0] = '\0';
	while (format[i])
	{
		if (alst)
		{
			ft_strncat(buf, format + i, alst->index - i);
			j += alst->index - i;
			buf[j] = '\0';
			j = write_arg(buf, alst, j, &c);
			i = alst->end + 1;
			alst = alst->next;
		}
		else
			return (write_end(buf, format + i, j, c));
	}
	c += write_buf(buf, &j);
	return (c);
}

int		ft_printf(char *format, ...)
{
	va_list	arg;
	t_arg	*alst;
	size_t	ret;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	parse_args(format, &alst, &arg);
	if (alst == NULL)
		return (write(1, format, ft_strlen(format)));
	ret = write_all(format, alst);
	va_end(arg);
	del_list(&alst);
	return (ret);
}
