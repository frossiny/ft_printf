/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_di_hard.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:50:09 by ratin             #+#    #+#             */
/*   Updated: 2019/02/01 12:49:19 by ratin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "limits.h"

int		main()
{
	short           nb;
	int				ret;
	int				ret2;
/* 	

	char c;
	c = '!';
		ret = ft_printf( "%c ", c);
		printf("\n");
		ret2 = dprintf(2, "%c ", c);
		printf("\nret = %d || ret2 = %d\n",ret,ret2);
		ret = ft_printf( "%1c ", c);
		printf("\n");
		ret2 = dprintf(2, "%1c ", c);
		printf("\nret = %d || ret2 = %d\n",ret,ret2);
		ret = ft_printf( "%7c ", c);
		printf("\n");
		ret2 = dprintf(2, "%7c ", c);
		printf("\nret = %d || ret2 = %d\n",ret,ret2);
		ret = ft_printf( "%-1c ", c);
		printf("\n");
		ret2 = dprintf(2, "%-1c ", c);
		printf("\nret = %d || ret2 = %d\n",ret,ret2);
		ret = ft_printf( "%-5c ", c);
		printf("\n");
		ret2 = dprintf(2, "%-5c ", c);
		printf("\nret = %d || ret2 = %d\n",ret,ret2); */

		char    *str;
        str = "Okalm";
	    ret = ft_printf("\ntest basique:%s", str);
	    ret2 = dprintf(2, "\ntest basique:%s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nprecision / zero:%.0s", str);
     	ret2 = dprintf(2, "\nprecision / zero:%.0s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nprecision / petite:%.5s", str);
     	ret2 = dprintf(2, "\nprecision / petite:%.5s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nprecision / grande:%.15s", str);
     	ret2 = dprintf(2, "\nprecision / grande:%.15s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nprec + minus:%-.5s", str);
     	ret2 = dprintf(2, "\nprec + minus:%-.5s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nsize / petite:%5s", str);
     	ret2 = dprintf(2, "\nsize / petite:%5s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nsize / grande:%15s", str);
     	ret2 = dprintf(2, "\nsize / grande:%15s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nMinus + size / petite:%-5s", str);
     	ret2 = dprintf(2, "\nMinus + size / petite:%-5s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nMinus + size / grande:%-15s", str);
     	ret2 = dprintf(2, "\nMinus + size / grande:%-15s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nMinus + size + prec:%-15.5s", str);
     	ret2 = dprintf(2, "\nMinus + size + prec:%-15.5s", str);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nNULL:%12s", NULL);
     	ret2 = dprintf(2, "\nNULL:%12s", NULL);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nNULL:%1s", NULL);
     	ret2 = dprintf(2, "\nNULL:%1s", NULL);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nNULL:%-5.6s", NULL);
     	ret2 = dprintf(2, "\nNULL:%-5.6s", NULL);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nNULL:%-.8s", NULL);
     	ret2 = dprintf(2, "\nNULL:%-.8s", NULL);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nNULL:%.12s", NULL);
     	ret2 = dprintf(2, "\nNULL:%.12s", NULL);
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nempty:%-.5s", "");
     	ret2 = dprintf(2, "\nempty:%-.5s", "");
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nempty:%-1.32s", "");
     	ret2 = dprintf(2, "\nempty:%-1.32s", "");
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nempty:%1.4s", "");
     	ret2 = dprintf(2, "\nempty:%1.4s", "");
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
        ret = ft_printf("\nempty:%23s", "");
     	ret2 = dprintf(2, "\nempty:%23s", "");
		printf("\nret = %d et ret2 = %d\n", ret, ret2);
		printf("\n");

	
	ret = ft_printf("Okalmos : |%+4%|\n");
	printf("\n");
	ret2 = dprintf(2, "Okalmos : |%+4%|\n");
	printf("\nret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("Okalmos : |%s|\n", NULL);
	printf("\n");
	ret2 = dprintf(2, "Okalmos : |%s|\n", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);
/*	
	ret = ft_printf("Okalmos : %c %f %d %x", 'A', 1235.123, 0, 56985);
	printf("\n");
	ret2= dprintf(2, "Okalmos : %c %f %d %x", 'A', 1235.123, 0, 56985);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	*/

/* 	nb = -23;
	ret = ft_printf("max int :  %d", INT16_MAX);
	printf("\n");	
	ret2 = dprintf(2, "max int :  %d", INT16_MAX);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("min int :  %d", INT16_MIN);
	printf("\n");	
	ret2 = dprintf(2, "min int :  %d", INT16_MIN);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("max int :  %d", INT32_MAX);
	printf("\n");	
	ret2 = dprintf(2, "max int :  %d", INT32_MAX);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("min int :  %d", INT32_MIN);
	printf("\n");	
	ret2 = dprintf(2, "min int :  %d", INT32_MIN);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("max long :  %ld", LONG_MAX);
	printf("\n");	
	ret2 = dprintf(2, "max long :  %ld", LONG_MAX);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("min long :  %ld", LONG_MIN);
	printf("\n");	
	ret2 = dprintf(2, "min long :  %ld", LONG_MIN);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("max long long :  %lld", __LONG_LONG_MAX__);
	printf("\n");	
	ret2 = dprintf(2, "max long long :  %lld", __LONG_LONG_MAX__);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("min long long :  %lld",LLONG_MIN);
	printf("\n");	
	ret2 = dprintf(2, "min long long :  %lld",LLONG_MIN);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n"); */


}