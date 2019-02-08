/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_f_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saouas <saouas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:38:27 by ratin             #+#    #+#             */
/*   Updated: 2019/01/29 18:02:41 by saouas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{/*
	double	nb;
	nb = -12547.58;

 	ft_printf("space:% f\n", nb);
	printf("\n");	
	printf("space:% f\n", nb);
	printf("\n\n");
	ft_printf("plus:%+f\n", nb);
	printf("\n");	
	printf("plus:%+f\n", nb);
	printf("\n\n");
	ft_printf("hash:%#f\n", nb);
	printf("\n");	
	printf("hash:%#f\n", nb);
	printf("\n\n");
	ft_printf("precision:%.2f\n", nb);
	printf("\n");	
	printf("precision:%.2f\n", nb);
	printf("\n\n");
	ft_printf("big prec:%.14f\n", nb);
	printf("\n");	
	printf("big prec:%.14f\n", nb);
	printf("\n\n");
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");	
	printf("precision + hash:%#.0f\n", nb);
	printf("\n\n");
	ft_printf("space + prec:% .5f\n", nb);
	printf("\n");	
	printf("space + prec:% .5f\n", nb);
	printf("\n\n");
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:%# .0f\n", nb);
	printf("\n\n");
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:% #.0f\n", nb);
	printf("\n\n");
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");	
	printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n\n");
	ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n\n");
	ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n\n");
	ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");	
	printf("Prec + 0:%0.5f\n", nb);
	printf("\n\n");
	ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");	
	printf("Prec + minus:%-.5f\n", nb);
	printf("\n\n");
	ft_printf("size:%5f\n", nb);
	printf("\n");	
	printf("size:%5f\n", nb);
	printf("\n\n");
	ft_printf("size + space:% 5f\n", nb);
	printf("\n");	
	printf("size + space:% 5f\n", nb);
	printf("\n\n");
	ft_printf("size + plus:%+5f\n", nb);
	printf("\n");	
	printf("size + plus:%+5f\n", nb);
	printf("\n\n");
	ft_printf("size + space:%# 5f\n", nb);
	printf("\n");	
	printf("size + space:%# 5f\n", nb);
	printf("\n\n");
	ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");	
	printf("size + plus:%#+5f\n", nb);
	printf("\n\n");
	ft_printf("size + minus:%-5f\n", nb);
	printf("\n");	
	printf("size + minus:%-5f\n", nb);
	printf("\n\n");
	ft_printf("size + 0:%05f\n", nb);
	printf("\n");	
	printf("size + 0:%05f\n", nb);
	printf("\n\n");
	ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%+05f\n", nb);
	printf("\n\n");
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n\n");
	ft_printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n");	
	printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n\n");
	ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");	
	printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n\n");
	ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");	
	printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n\n");
	ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");	
	printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n\n");
	ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n\n");
	ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n\n");
	ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n\n");
	ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n\n"); 

	ft_printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n\n");

	ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n\n");

	ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n\n");
	
	nb = 0;
	ft_printf("space:% f\n", nb);
	printf("\n");
	printf("space:%  f\n", nb);
	printf("\n\n");
	
	ft_printf("plus:%+f\n", nb);
	printf("\n");
	printf("plus:%+f\n", nb);
	printf("\n\n");
	
	ft_printf("hash:%#f\n", nb);
	printf("\n");
	printf("hash:%#f\n", nb);
	printf("\n\n");
	
	ft_printf("precision:%.2f\n", nb);
	printf("\n");
	printf("precision:%.2f\n", nb);
	printf("\n\n");
	
	ft_printf("big prec:%.14f\n", nb);
	printf("\n");
	printf("big prec:%.14f\n", nb);
	printf("\n\n");
	
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");
	printf("precision + hash:%#.0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec:% .5f\n", nb);
	printf("\n");
	printf("space + prec:% .5f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");
	printf("space + prec + hash:%# .0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");
	printf("space + prec + hash:% #.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");
	printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");
	printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");
	printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");
	printf("Prec + 0:%0.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");
	printf("Prec + minus:%-.5f\n", nb);
	printf("\n\n");
	
	ft_printf("size:%5f\n", nb);
	printf("\n");
	printf("size:%5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:% 5f\n", nb);
	printf("\n");
	printf("size + space:% 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%+5f\n", nb);
	printf("\n");
	printf("size + plus:%+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:%# 5f\n", nb);
	printf("\n");
	printf("size + space:%# 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");
	printf("size + plus:%#+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus:%-5f\n", nb);
	printf("\n");
	printf("size + minus:%-5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05f\n", nb);
	printf("\n");
	printf("size + 0:%05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");
	printf("size + 0 + plus:%+05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");
	printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n\n");
	ft_printf("LAAAAAAAsize + 0 + prec:%05.3f\n", nb);
	printf("\n");
	printf("LAAAAAAAsize + 0 + prec:%05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");
	printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");
	printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");
	printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");
	printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");
	printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");
	printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");
	printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");
	printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");
	printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");
	printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n\n");

	// Tout fonctionne avant la	
	nb = 45.123456789;
	ft_printf("space:% f\n", nb);
	printf("\n");
	printf("space:% f\n", nb);
	printf("\n\n");
	ft_printf("plus:%+f\n", nb);
	printf("\n");
	printf("plus:%+f\n", nb);
	printf("\n\n");
	
	ft_printf("hash:%#f\n", nb);
	printf("\n");
	printf("hash:%#f\n", nb);
	printf("\n\n");
	
	ft_printf("precision:%.2f\n", nb);
	printf("\n");
	printf("precision:%.2f\n", nb);
	printf("\n\n");
	
	ft_printf("big prec:%.14f\n", nb);
	printf("\n");
	printf("big prec:%.14f\n", nb);
	printf("\n\n");
	
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");
	printf("precision + hash:%#.0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec:% .5f\n", nb);
	printf("\n");
	printf("space + prec:% .5f\n", nb);
	printf("\n\n");
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");
	printf("space + prec + hash:%# .0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");
	printf("space + prec + hash:% #.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");
	printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");
	printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");
	printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");
	printf("Prec + 0:%0.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");
	printf("Prec + minus:%-.5f\n", nb);
	printf("\n\n");
	
	ft_printf("size:%5f\n", nb);
	printf("\n");
	printf("size:%5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:% 5f\n", nb);
	printf("\n");
	printf("size + space:% 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%+5f\n", nb);
	printf("\n");
	printf("size + plus:%+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:%# 5f\n", nb);
	printf("\n");
	printf("size + space:%# 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");
	printf("size + plus:%#+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus:%-5f\n", nb);
	printf("\n");
	printf("size + minus:%-5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05f\n", nb);
	printf("\n");
	printf("size + 0:%05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");
	printf("size + 0 + plus:%+05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");
	printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n");
	printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");
	printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");
	printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");
	printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");
	printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");
	printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");
	printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");
	printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("LAAAAAsize + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");
	printf("LAAAAAsize + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");
	printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");
	printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n\n");

	
	nb = 12389123798;	

	ft_printf("space:% f\n", nb);
	printf("\n");	
	printf("space:% f\n", nb);
	printf("\n\n");
	
	ft_printf("plus:%+f\n", nb);
	printf("\n");	
	printf("plus:%+f\n", nb);
	printf("\n\n");
	
	ft_printf("hash:%#f\n", nb);
	printf("\n");	
	printf("hash:%#f\n", nb);
	printf("\n\n");
	
	ft_printf("precision:%.2f\n", nb);
	printf("\n");	
	printf("precision:%.2f\n", nb);
	printf("\n\n");
	
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");	
	printf("precision + hash:%#.0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec:% .5f\n", nb);
	printf("\n");	
	printf("space + prec:% .5f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:%# .0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:% #.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");	
	printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");	
	printf("Prec + 0:%0.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");	
	printf("Prec + minus:%-.5f\n", nb);
	printf("\n\n");
	
	ft_printf("size:%5f\n", nb);
	printf("\n");	
	printf("size:%5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:% 5f\n", nb);
	printf("\n");	
	printf("size + space:% 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%+5f\n", nb);
	printf("\n");	
	printf("size + plus:%+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:%# 5f\n", nb);
	printf("\n");	
	printf("size + space:%# 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");	
	printf("size + plus:%#+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus:%-5f\n", nb);
	printf("\n");	
	printf("size + minus:%-5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05f\n", nb);
	printf("\n");	
	printf("size + 0:%05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%+05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n\n");

	ft_printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n");	
	printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");	
	printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");	
	printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");	
	printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n\n");


	nb = -8965421.12356432156;
	ft_printf("space:% f\n", nb);
	printf("\n");	
	printf("space:% f\n", nb);
	printf("\n\n");
	
	ft_printf("plus:%+f\n", nb);
	printf("\n");	
	printf("plus:%+f\n", nb);
	printf("\n\n");
	
	ft_printf("hash:%#f\n", nb);
	printf("\n");	
	printf("hash:%#f\n", nb);
	printf("\n\n");
	
	ft_printf("precision:%.2f\n", nb);
	printf("\n");	
	printf("precision:%.2f\n", nb);
	printf("\n\n");
	
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");	
	printf("precision + hash:%#.0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec:% .5f\n", nb);
	printf("\n");	
	printf("space + prec:% .5f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:%# .0f\n", nb);
	printf("\n\n");
	
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");	
	printf("space + prec + hash:% #.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");	
	printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");	
	printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");	
	printf("Prec + 0:%0.5f\n", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");	
	printf("Prec + minus:%-.5f\n", nb);
	printf("\n\n");
	
	ft_printf("size:%5f\n", nb);
	printf("\n");	
	printf("size:%5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:% 5f\n", nb);
	printf("\n");	
	printf("size + space:% 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%+5f\n", nb);
	printf("\n");	
	printf("size + plus:%+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + space:%# 5f\n", nb);
	printf("\n");	
	printf("size + space:%# 5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");	
	printf("size + plus:%#+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus:%-5f\n", nb);
	printf("\n");	
	printf("size + minus:%-5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05f\n", nb);
	printf("\n");	
	printf("size + 0:%05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%+05f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");	
	printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n");	
	printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");	
	printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");	
	printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");	
	printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");	
	printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");	
	printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");	
	printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n\n");
*/
	double nb;
	 nb = 0.0/1.0;
	
	ft_printf("%f\n", nb);
	printf("%f\n", nb);
	printf("\n");	

	ft_printf("%12f\n", nb);
	printf("%12f\n", nb);
	printf("\n");	

	ft_printf("%-12f\n", nb);
	printf("%-12f\n", nb);
	printf("\n");	

	ft_printf("%5.9f\n", nb);
	printf("%5.9f\n", nb);
	printf("\n");

	nb = -0.0/1.0;
	
	ft_printf("%f\n", nb);
	printf("%f\n", nb);
	printf("\n");	

	ft_printf("%12f\n", nb);
	printf("%12f\n", nb);
	printf("\n");	

	ft_printf("%-12f\n", nb);
	printf("%-12f\n", nb);
	printf("\n");	

	ft_printf("%5.9f\n", nb);
	printf("%5.9f\n", nb);
	printf("\n");

	nb = 0.0/0.0;
	
	ft_printf("%f\n", nb);
	printf("%f\n", nb);
	printf("\n");	

	ft_printf("%12f\n", nb);
	printf("%12f\n", nb);
	printf("\n");	

	ft_printf("%-12f\n", nb);
	printf("%-12f\n", nb);
	printf("\n");	

	ft_printf("%5.9f\n", nb);
	printf("%5.9f\n", nb);
	printf("\n");



}