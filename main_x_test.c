/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:29:04 by ratin             #+#    #+#             */
/*   Updated: 2019/02/04 15:03:16 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			main()
{
	int		nb;
	nb = 12356789;
	int ret2 = 0;

	ft_printf("%x", nb);
	printf("\n");
	ret2 = dprintf(1, "%x", nb);
	printf("\n\n");	
	
	ft_printf("test X:%X", nb);
	printf("\n");
	ret2 = dprintf(1, "test X:%X", nb);
	printf("\n\n");	
	
	ft_printf("Hash:%#X", nb);
	printf("\n");
	ret2 = dprintf(1, "Hash:%#X", nb);
	printf("\n\n");	
	
	ft_printf("prec / grande:%.5X", nb);
	printf("\n");
	ret2 = dprintf(1, "prec / grande:%.5X", nb);
	printf("\n\n");	
	
	ft_printf("hash + prec / grande:%#.5X", nb);
	printf("\n");
	ret2 = dprintf(1, "hash + prec / grande:%#.5X", nb);
	printf("\n\n");	
	
	ft_printf("hash + prec / petite:%#.1X", nb);
	printf("\n");
	ret2 = dprintf(1, "hash + prec / petite:%#.1X", nb);
	printf("\n\n");	
	
	ft_printf("prec + 0: %0.5X", nb);
	printf("\n");
	ret2 = dprintf(1, "prec + 0: %0.5X", nb);
	printf("\n\n");	
	
	ft_printf("Prec + minus:%-.5X", nb);
	printf("\n");
	ret2 = dprintf(1, "Prec + minus:%-.5X", nb);
	printf("\n\n");	
	
	ft_printf("size:%5X", nb);
	printf("\n");
	ret2 = dprintf(1, "size:%5X", nb);
	printf("\n\n");	
	
	ft_printf("size + prec:%7.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + prec:%7.3X", nb);
	printf("\n\n");	
	
	ft_printf("size + mminus:%-5X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + mminus:%-5X", nb);
	printf("\n\n");	
	
	ft_printf("size + 0:%05X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + 0:%05X", nb);
	printf("\n\n");	
	
	ft_printf("size + 0 + hash:%#05X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + 0 + hash:%#05X", nb);
	printf("\n\n");	
	
	ft_printf("size + 0 + prec:%05.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + 0 + prec:%05.3X", nb);
	printf("\n\n");	
	
	ft_printf("size + minus + prec:%-5.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + minus + prec:%-5.3X", nb);
	printf("\n\n");	
	
	ft_printf("size + hash + 0 + prec:%#05.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + hash + 0 + prec:%#05.3X", nb);
	printf("\n\n");	
	
	ft_printf("size + hash + 0 + prec:%0#5.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + hash + 0 + prec:%0#5.3X", nb);
	printf("\n\n");	
	
	ft_printf("size + hash + minus + prec:%-#7.3X", nb);
	printf("\n");
	ret2 = dprintf(1, "size + hash + minus + prec:%-#7.3X", nb);
	printf("\n\n");

}
 

/* int		main(void)
{
	int	nb = 12;

	ft_printf("%x", nb);
	printf("\n");	
	ret2 = dprintf(1, "%x", nb);
	printf("\n\n");
	
	ft_printf("test X:%X", nb);
	printf("\n");	
	ret2 = dprintf(1, "test X:%X", nb);
	printf("\n\n");
	
	ft_printf("Hash:%#X", nb);
	printf("\n");	
	ret2 = dprintf(1, "Hash:%#X", nb);
	printf("\n\n");
	
	ft_printf("prec / grande:%.5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "prec / grande:%.5X", nb);
	printf("\n\n");
	
	ft_printf("prec / petite:%.0X", nb);
	printf("\n");	
	ret2 = dprintf(1, "prec / petite:%.0X", nb);
	printf("\n\n");
	
	ft_printf("hash + prec / grande:%#.5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "hash + prec / grande:%#.5X", nb);
	printf("\n\n");
	
	ft_printf("hash + prec / petite:%#.1X", nb);
	printf("\n");	
	ret2 = dprintf(1, "hash + prec / petite:%#.1X", nb);
	printf("\n\n");
	
	ft_printf("prec + 0: %0.5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "prec + 0: %0.5X", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "Prec + minus:%-.5X", nb);
	printf("\n\n");
	
	ft_printf("size:%5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size:%5X", nb);
	printf("\n\n");
	
	ft_printf("size + prec:%7.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + prec:%7.3X", nb);
	printf("\n\n");
	
	ft_printf("size + mminus:%-5X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + mminus:%-5X", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + 0:%05X", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + hash:%#05X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + 0 + hash:%#05X", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec:%05.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + 0 + prec:%05.3X", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + minus + prec:%-5.3X", nb);
	printf("\n\n");
	
	ft_printf("size + hash + 0 + prec:%#05.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + hash + 0 + prec:%#05.3X", nb);
	printf("\n\n");
	
	ft_printf("size + hash + 0 + prec:%0#5.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + hash + 0 + prec:%0#5.3X", nb);
	printf("\n\n");
	
	ft_printf("size + hash + minus + prec:%-#7.3X", nb);
	printf("\n");	
	ret2 = dprintf(1, "size + hash + minus + prec:%-#7.3X", nb);
	printf("\n\n");

	} */
