/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:34:24 by ratin             #+#    #+#             */
/*   Updated: 2019/02/04 16:12:33 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		main()
{
	char c = '\0';
	int	ret;
	int	ret2;
	unsigned short s = 0;

	ft_printf("%hd", 32768);
	printf("\n");
	printf("%hd", 32768);
	printf("\n\n");

//	tester les long ma


 	unsigned int	nb;
	nb = 0;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);
	printf("\n\n");

	ft_printf("null prec : %#.0x\n", nb);
	dprintf(2, "null prec : %#.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#.x\n", nb);
	dprintf(2, "null prec : %#.x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#12.0x\n", nb);
	dprintf(2, "null prec : %#12.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#-5.x\n", nb);
	dprintf(2, "null prec : %#-5.x\n", nb);
	printf("\n\n");

	nb = 0;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	printf("\n\n");
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);
	printf("\n\n");

	ft_printf("null prec : %#.0X\n", nb);
	dprintf(2, "null prec : %#.0X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#.X\n", nb);
	dprintf(2, "null prec : %#.X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#12.0X\n", nb);
	dprintf(2, "null prec : %#12.0X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#-5.X\n", nb);
	dprintf(2, "null prec : %#-5.X\n", nb);
	printf("\n\n");

	nb = 0;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	printf("\n\n");
	ft_printf( "null prec : |%5.o|\n", nb);
	dprintf(2,"null prec : |%5.o|\n", nb);
	printf("\n\n");

	ft_printf("null prec : %#.0o\n", nb);
	dprintf(2, "null prec : %#.0o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#.o\n", nb);
	dprintf(2, "null prec : %#.o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#12.0o\n", nb);
	dprintf(2, "null prec : %#12.0o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %#5.3o\n", nb);
	dprintf(2, "null prec : %#5.3o\n", nb);
	printf("\n\n");

	ft_printf("null prec : %.o\n", nb);
	dprintf(2, "null prec : %.o\n", nb);
	printf("\n\n");

        nb = 21;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);
	printf("\n\n");

        nb = 21;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	printf("\n\n");
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);
	printf("\n\n");

        nb = 21;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	printf("\n\n");
	ft_printf( "null prec : %-5.o\n", nb);
	dprintf(2,"null prec : %-5.o\n", nb);
	printf("\n\n");

        nb = -543;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	printf("\n\n");
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);
	printf("\n\n");

        nb = -543;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	printf("\n\n");
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);
	printf("\n\n");

        nb = -543;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	printf("\n\n");
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	printf("\n\n");
	ft_printf( "null prec : %-5.o\n", nb);
	dprintf(2,"null prec : %-5.o\n", nb);
	printf("\n\n"); 
 	printf("\n\n");
	ft_printf("%hhd", 128);
	printf("\n\n");
	printf("%hhd", 128);
	printf("\n\n"); 

	nb = CHAR_MAX;

	ret = ft_printf("%hhx", nb);
	printf("\n");
	ret2 = dprintf(2, "%hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);
	printf("\n\n");
	
	ret = ft_printf("test X:%hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "test X:%hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("Hash:%#hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "Hash:%#hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("prec / grande:%.5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "prec / grande:%.5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("hash + prec / grande:%#.5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "hash + prec / grande:%#.5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("hash + prec / petite:%#.1hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "hash + prec / petite:%#.1hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("prec + 0: %0.5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "prec + 0: %0.5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("Prec + minus:%-.5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "Prec + minus:%-.5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size:%5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size:%5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + prec:%7.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + prec:%7.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + mminus:%-5hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + mminus:%-5hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + 0:%05hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + 0:%05hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + 0 + hash:%#05hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + 0 + hash:%#05hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + 0 + prec:%05.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + 0 + prec:%05.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + minus + prec:%-5.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + minus + prec:%-5.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + hash + 0 + prec:%#05.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + hash + 0 + prec:%#05.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + hash + 0 + prec:%0#5.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + hash + 0 + prec:%0#5.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size + hash + minus + prec:%-#7.3hhx", nb);
	printf("\n"); 
	ret2 = dprintf(2, "size + hash + minus + prec:%-#7.3hhx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
}
