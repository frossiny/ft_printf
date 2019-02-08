/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 22:33:29 by ratin             #+#    #+#             */
/*   Updated: 2019/01/29 19:31:17 by ratin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			main(void)
{
	int		ret;
	int		ret2;
	char    *str;

    str = "Okml";
	
	ret = ft_printf("test basique:%s", str);
	printf("\n");	
	ret2 = dprintf(2, "test basique:%s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("precision / zero:%.0s", str);
	printf("\n");	
	ret2 = dprintf(2, "precision / zero:%.0s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("precision / petite:%.5s", str);
	printf("\n");	
	ret2 = dprintf(2, "precision / petite:%.5s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("precision / grande:%.15s", str);
	printf("\n");	
	ret2 = dprintf(2, "precision / grande:%.15s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("prec + minus:%-.5s|", str);
	printf("\n");
	ret2 = dprintf(2, "prec + minus:%-.5s|", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size / petite:%5s", str);
	printf("\n");	
	ret2 = dprintf(2, "size / petite:%5s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("size / grande:%15s", str);
	printf("\n");	
	ret2 = dprintf(2, "size / grande:%15s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("Minus + size / petite:%-5s", str);
	printf("\n");	
	ret2 = dprintf(2, "Minus + size / petite:%-5s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("Minus + size / grande:%-15s", str);
	printf("\n");	
	ret2 = dprintf(2, "Minus + size / grande:%-15s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("Minus + size + prec:%-15.5s", str);
	printf("\n");	
	ret2 = dprintf(2, "Minus + size + prec:%-15.5s", str);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("NULL:%12s", NULL);
	printf("\n");	
	ret2 = dprintf(2, "NULL:%12s", NULL);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("NULL:%1s", NULL);
	printf("\n");	
	ret2 = dprintf(2, "NULL:%1s", NULL);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("NULL:%-5.6s", NULL);
	printf("\n");	
	ret2 = dprintf(2, "NULL:%-5.6s", NULL);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("NULL:%-.8s", NULL);
	printf("\n");	
	ret2 = dprintf(2, "NULL:%-.8s", NULL);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("NULL:%.12s", NULL);
	printf("\n");	
	ret2 = dprintf(2, "NULL:%.12s", NULL);
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("empty:%-.5s", "");
	printf("\n");	
	ret2 = dprintf(2, "empty:%-.5s", "");
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("empty:%-1.32s", "");
	printf("\n");	
	ret2 = dprintf(2, "empty:%-1.32s", "");
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("empty:%1.4s", "");
	printf("\n");	
	ret2 = dprintf(2, "empty:%1.4s", "");
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");
	
	ret = ft_printf("empty:%23s", "");
	printf("\n");
	ret2 = dprintf(2, "empty:%23s", "");
	printf("\nret = %d et ret2 = %d", ret, ret2);	
	printf("\n\n");

}

/* int		main(void)
{
	char	*str;
	int		ret;
	int		ret2;

	str = "Okml";

	ret = ft_printf("test basique:%s", str);
	printf("\n");
	ret2 = dprintf(2, "test basique:%s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("precision / zero:%.0s", str);
	printf("\n");
	ret2 = dprintf(2, "precision / zero:%.0s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("precision / petite:%.5s", str);
	printf("\n");
	ret2 = dprintf(2, "precision / petite:%.5s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("precision / grande:%.15s", str);
	printf("\n");
	ret2 = dprintf(2, "precision / grande:%.15s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("prec + minus:%-.5s", str);
	printf("\n");
	ret2 = dprintf(2, "prec + minus:%-.5s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("size / petite:%5s", str);
	printf("\n");
	ret2 = dprintf(2, "size / petite:%5s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("size / grande:%15s", str);
	printf("\n");
	ret2 = dprintf(2, "size / grande:%15s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("Minus + size / petite:%-5s", str);
	printf("\n");
	ret2 = dprintf(2, "Minus + size / petite:%-5s", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("Minus + size / grande:%-15s|", str);
	printf("\n");
	ret2 = dprintf(2, "Minus + size / grande:%-15s|", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	


	ret = ft_printf("Minus + size + prec:%-15.5s|", str);
	printf("\n");
	ret2 = dprintf(2, "Minus + size + prec:%-15.5s|", str);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("NULL:%12s|", NULL);
	printf("\n");
	ret2 = dprintf(2, "NULL:%12s|", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("NULL:%1s|", NULL);
	printf("\n");
	ret2 = dprintf(2, "NULL:%1s|", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("NULL:%-5.6s|", NULL);
	printf("\n");
	ret2 = dprintf(2, "NULL:%-5.6s|", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("NULL:%-.8s|", NULL);
	printf("\n");
	ret2 = dprintf(2, "NULL:%-.8s|", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("NULL:%.12s|", NULL);
	printf("\n");
	ret2 = dprintf(2, "NULL:%.12s|", NULL);
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("empty:%-.5s|", "");
	printf("\n");
	ret2 = dprintf(2, "empty:%-.5s|", "");
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("empty:%-1.32s|", "");
	printf("\n");
	ret2 = dprintf(2, "empty:%-1.32s|", "");
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("empty:%1.4s|", "");
	printf("\n");
	ret2 = dprintf(2, "empty:%1.4s|", "");
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("empty:%23s|", "");
	printf("\n");
	ret2 = dprintf(2, "empty:%23s|", "");
	printf("\nret = %d et ret2 = %d\n", ret, ret2);	
	printf("\n\n");
} 
 */