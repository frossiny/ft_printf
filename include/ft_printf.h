/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:47:37 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/08 18:05:18 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

# define BUFF_SIZE	2048

typedef enum				e_asize
{
	none,
	hh,
	h,
	ll,
	l,
	L
}							t_asize;

typedef struct				s_arg
{
	size_t					index;
	size_t					end;
	char					*str;
	char					type;
	int						prefix : 1;
	int						zero : 1;
	int						left : 1;
	int						space : 1;
	int						positive : 1;
	int						has_precision : 1;
	long					precision;
	long					width;
	t_asize					size;
	union
	{
		long long			ll;
		unsigned long long	ull;
		double				d;
		long double			ld;
		unsigned char		c;
		void				*ptr;
		__int128_t			bin;
	}						data;
	struct s_arg			*next;
}							t_arg;

int							ft_printf(char *format, ...);
void						parse_args(char *format, t_arg **alst,
													va_list *args);
void						fill_arg(t_arg *alst, va_list *args);
void						convert(t_arg *arg);

int							is_flag(char c);
int							is_size(char c);
int							is_type(char c);
void						del_list(t_arg **alst);
int							ft_atoi_i(const char *str, size_t *i);
size_t						ft_strcat_c(char *s1, const char *s2, int j);
int							size_base(char c);
char						*create_base(unsigned int base, char maj);
int							is_infinite(t_arg *arg);
int							is_nan(t_arg *arg);
int							is_float_neg(t_arg *arg);
void						handle_inf(t_arg *arg);

void						itoa_signed(t_arg *arg);
void						itoa_unsigned(t_arg *arg);
void						handle_float(t_arg *arg);
void						handle_char(t_arg *arg);
void						handle_str(t_arg *arg);
void						handle_ptr(t_arg *arg);
void						handle_modulo(t_arg *arg);
void						handle_unknown(t_arg *arg);

#endif
