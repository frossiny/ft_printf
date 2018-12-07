/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:47:37 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/07 16:42:47 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"
#include "stdio.h"

# define BUFF_SIZE	512

typedef enum		e_asize
{
	none,
	hh,
	h,
	ll,
	l,
	L
}					t_asize;

typedef struct		s_arg
{
	size_t			index;
	char			type;
	int				prefix : 1;
	int				zero : 1;
	int				left : 1;
	int				space : 1;
	int				positive : 1;
	int				precision;
	int				width;
	t_asize			size;
	struct s_arg	*next;
}					t_arg;

int					ft_printf(char *format, ...);
void				parse_args(char *format, t_arg **alst);

int					is_flag(char c);
int					is_size(char c);
int					is_type(char c);
void				del_list(t_arg **alst);
int					ft_atoi_i(const char *str, size_t *i);

size_t				handle_integer(char gbuf[], t_arg *arg, void *data);

#endif
