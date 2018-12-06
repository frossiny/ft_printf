/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:22:55 by frossiny          #+#    #+#             */
/*   Updated: 2018/11/14 13:50:14 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (len == 0)
		return (b);
	*(unsigned char *)b = (unsigned char)c;
	ft_memset(b + 1, c, len - 1);
	return (b);
}
