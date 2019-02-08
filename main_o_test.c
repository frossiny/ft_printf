/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_o_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:31:36 by ratin             #+#    #+#             */
/*   Updated: 2019/02/04 14:59:32 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	int ret = 0;
	int ret2 = 0;

	int nb = 0;

	printf("\n");	
	ret2 = dprintf(2, "size + zero + prec:%05.3o\n", nb);
	printf("ret = %d et ret 2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + minus + prec:%-5.3o\n", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + minus + prec:%-5.3o\n", nb);
	printf("ret = %d et ret 2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + zero + prec:%#5.3o\n", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + zero + prec:%#5.3o\n", nb);
	printf("ret = %d et ret 2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + zero + prec:%#5.3o\n", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + zero + prec:%#5.3o\n", nb);
	printf("ret = %d et ret 2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + minus + prec:%-#7.3o\n", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + minus + prec:%-#7.3o\n", nb);
	printf("ret = %d et ret 2 = %d\n", ret, ret2);	
	printf("\n\n");

	return (0);
}
