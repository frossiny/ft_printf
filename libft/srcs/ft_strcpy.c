/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:04:32 by frossiny          #+#    #+#             */
/*   Updated: 2018/11/07 18:00:04 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = dst;
	while (*s != '\0')
		*d++ = *s++;
	*d = '\0';
	return (dst);
}
