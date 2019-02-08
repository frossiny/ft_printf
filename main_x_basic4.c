/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x_basic4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:12:03 by ratin             #+#    #+#             */
/*   Updated: 2019/02/02 14:34:21 by ratin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>

int					main()
{
	int				ret;
	int				ret2;
	unsigned short	nb;


	nb = 12554;

 	ret = ft_printf("%hx", nb);
	printf("\n");
	ret2 = dprintf(2, "%hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("test X:%hx", nb);
	printf("\n");
	ret2 = dprintf(2, "test X:%hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("Hash:%#hx", nb);
	printf("\n");
	ret2 = dprintf(2, "Hash:%#hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("prec / grande:%.5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "prec / grande:%.5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("hash + prec / grande:%#.5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "hash + prec / grande:%#.5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("hash + prec / petite:%#.1hx", nb);
	printf("\n");
	ret2 = dprintf(2, "hash + prec / petite:%#.1hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("prec + 0: %0.5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "prec + 0: %0.5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("Prec + minus:%-.5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "Prec + minus:%-.5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size:%5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size:%5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + prec:%7.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + prec:%7.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + mminus:%-5hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + mminus:%-5hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0:%05hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0:%05hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0 + hash:%#05hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + hash:%#05hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0 + prec:%05.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + prec:%05.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + minus + prec:%-5.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus + prec:%-5.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + 0 + prec:%#05.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + hash + 0 + prec:%#05.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + 0 + prec:%0#5.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + hash + 0 + prec:%0#5.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + minus + prec:%-#7.3hx", nb);
	printf("\n");
	ret2 = dprintf(2, "size + hash + minus + prec:%-#7.3hx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");


/* 	nb = 56489612321568652;

 	ret = ft_printf("%lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "%lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("test X:%lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "test X:%lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("Hash:%#lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "Hash:%#lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("prec / grande:%.5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "prec / grande:%.5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("hash + prec / grande:%#.5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "hash + prec / grande:%#.5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("hash + prec / petite:%#.1lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "hash + prec / petite:%#.1lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("prec + 0: %0.5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "prec + 0: %0.5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("Prec + minus:%-.5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "Prec + minus:%-.5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size:%5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size:%5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + prec:%7.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + prec:%7.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + mminus:%-5lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + mminus:%-5lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0:%05lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + 0:%05lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0 + hash:%#05lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + 0 + hash:%#05lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + 0 + prec:%05.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + 0 + prec:%05.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + minus + prec:%-5.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + minus + prec:%-5.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + 0 + prec:%#05.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + 0 + prec:%#05.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + 0 + prec:%0#5.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + 0 + prec:%0#5.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");

	ret = ft_printf("size + hash + minus + prec:%-#7.3lx", nb);
	printf("\n");	
	ret2 = dprintf(2, "size + hash + minus + prec:%-#7.3lx", nb);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n"); */

}