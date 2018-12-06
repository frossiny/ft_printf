/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:47:37 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/06 17:19:50 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
#include "stdio.h"

# define BUFF_SIZE	512

typedef enum		e_asize
{
	none,
	hh,
	h,
	l,
	ll,
	j,
	t,
	z
}					t_asize;

typedef struct		s_arg
{
	int			prefix : 1;
	int			zero : 1;
	int			left : 1;
	int			space : 1;
	int			positive : 1;
	t_asize			size;
	struct s_arg	*next;
}					t_arg;

int					ft_printf(char *format, ...);
void				parse_args(char *format, t_arg **alst);

int					is_flag(char c);

#endif
