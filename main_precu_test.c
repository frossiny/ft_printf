/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_precu_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:18:40 by ratin             #+#    #+#             */
/*   Updated: 2019/01/30 19:04:16 by ratin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	int		ret;
	int		ret2;
    unsigned int            nb;

/* 	nb = 0;
	
	ret = ft_printf("null prec : %.0x\n", nb);
	ret2 = dprintf(2, "null prec : %.0x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %.x\n", nb);
	ret2 = dprintf(2, "null prec : %.x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %12.0x|\n", nb);
	ret2 = dprintf(2, "null prec : %12.0x|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");

	
	ret = ft_printf("null prec : %-5.x\n", nb);
	ret2 = dprintf(2, "null prec : %-5.x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");


	ret = ft_printf("null prec : %#.0x\n", nb);
	ret2 = dprintf(2, "null prec : %#.0x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#.x\n", nb);
	ret2 = dprintf(2, "null prec : %#.x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n"); 
	
	ret = ft_printf("null prec : %#12.3x|\n", nb);
	ret2 = dprintf(2, "null prec : %#12.3x|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#-5.x\n", nb);
	ret2 = dprintf(2, "null prec : %#-5.x\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");


    nb = 0;
	ret = ft_printf("null prec : %.0X\n", nb);
	ret2 = dprintf(2,"null prec : %.0X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %.X\n", nb);
	ret2 = dprintf(2,"null prec : %.X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %12.0X\n", nb);
	ret2 = dprintf(2,"null prec : %12.0X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf( "null prec : %-5.X\n", nb);
	ret2 = dprintf(2,"null prec : %-5.X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("null prec : %#.0X\n", nb);
	ret2 = dprintf(2, "null prec : %#.0X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#.X\n", nb);
	ret2 = dprintf(2, "null prec : %#.X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#12.0X\n", nb);
	ret2 = dprintf(2, "null prec : %#12.0X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#-5.X\n", nb);
	ret2 = dprintf(2, "null prec : %#-5.X\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");


    nb = 0;
	ret = ft_printf("null prec : %.0o\n", nb);
	ret2 = dprintf(2,"null prec : %.0o\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %.o\n", nb);
	ret2 = dprintf(2,"null prec : %.o\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %12.0o|\n", nb);
	ret2 = dprintf(2,"null prec : %12.0o|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf( "null prec : %-5.o\n", nb);
	ret2 = dprintf(2,"null prec : %-5.o\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n"); 
	

	ret = ft_printf("null prec : %#.0o|\n", nb);
	ret2 = dprintf(2, "null prec : %#.0o|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#.o\n", nb);
	ret2 = dprintf(2, "null prec : %#.o\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#12.0o|\n", nb);
	ret2 = dprintf(2, "null prec : %#12.0o|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("null prec : %#-5.o|\n", nb);
	ret2 = dprintf(2, "null prec : %#-5.o|\n", nb);
	printf("ret = %d et ret2 =%d", ret, ret2);	
	printf("\n\n"); */
	
/*  	nb = 21;
	ret = ft_printf("null prec : %.0x\n", nb);
	ret2 = dprintf(2, "null prec : %.0x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.x\n", nb);
	ret2 = dprintf(2, "null prec : %.x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0x\n", nb);
	ret2 = dprintf(2, "null prec : %12.0x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %-5.x|\n", nb);
	ret2 = dprintf(2, "null prec : %-5.x|\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n"); */


/* 	nb = 21;
	ret = ft_printf("null prec : %.0X\n", nb);
	ret2 = dprintf(2,"null prec : %.0X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.X\n", nb);
	ret2 = dprintf(2,"null prec : %.X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0X\n", nb);
	ret2 = dprintf(2,"null prec : %12.0X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf( "null prec : %-5.X\n", nb);
	ret2 = dprintf(2,"null prec : %-5.X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");
 */

    nb = 21;
	ret = ft_printf("null prec : %.0o\n", nb);
	ret2 = dprintf(2,"null prec : %.0o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.o\n", nb);
	ret2 = dprintf(2,"null prec : %.o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0o\n", nb);
	ret2 = dprintf(2,"null prec : %12.0o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf( "null prec : %-5.o|\n", nb);
	ret2 = dprintf(2,"null prec : %-5.o|\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

/* 
    nb = -543;
	ret = ft_printf("null prec : %.0x\n", nb);
	ret2 = dprintf(2, "null prec : %.0x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.x\n", nb);
	ret2 = dprintf(2, "null prec : %.x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0x\n", nb);
	ret2 = dprintf(2, "null prec : %12.0x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %-5.x\n", nb);
	ret2 = dprintf(2, "null prec : %-5.x\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n"); */


/*
    nb = -543;
	ret = ft_printf("null prec : %.0X\n", nb);
	ret2 = dprintf(2,"null prec : %.0X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.X\n", nb);
	ret2 = dprintf(2,"null prec : %.X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0X\n", nb);
	ret2 = dprintf(2,"null prec : %12.0X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf( "null prec : %-5.X\n", nb);
	ret2 = dprintf(2,"null prec : %-5.X\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");


    nb = -543;
	ret = ft_printf("null prec : %.0o\n", nb);
	ret2 = dprintf(2,"null prec : %.0o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %.o\n", nb);
	ret2 = dprintf(2,"null prec : %.o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf("null prec : %12.0o\n", nb);
	ret2 = dprintf(2,"null prec : %12.0o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");

	ret = ft_printf( "null prec : %-5.o\n", nb);
	ret2 = dprintf(2,"null prec : %-5.o\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n"); */

}
