/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 02:34:00 by ratin             #+#    #+#             */
/*   Updated: 2019/02/04 14:53:26 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		main(void)
{
	short	nb;
	int		ret;
	int		ret2;

	nb = -23;
	
 	ft_printf("space% hd ", nb);
	printf("\n");
	dprintf(2, "space% hd ", nb);
	printf("\n\n");

	ft_printf("plus:%+hd ", nb);
	printf("\n");
	dprintf(2, "plus:%+hd ", nb);
	printf("\n\n");
	
	ft_printf("precision:%.5hd ", nb);
	printf("\n");
	dprintf(2, "precision:%.5hd ", nb);
	printf("\n\n");
	
	ft_printf("space + prec:% .5hd ", nb);
	printf("\n");
	dprintf(2, "space + prec:% .5hd ", nb);
	printf("\n\n");
	
	ft_printf("Plus + prec / grande:%+.5hd ", nb);
	printf("\n");
	dprintf(2, "Plus + prec / grande:%+.5hd ", nb);
	printf("\n\n");
	
	ft_printf("Prec + 0:%0.5hd ", nb);
	printf("\n");
	dprintf(2, "Prec + 0:%0.5hd ", nb);
	printf("\n\n");
	
	ft_printf("Prec + minus:%-.5hd ", nb);
	printf("\n");
	dprintf(2, "Prec + minus:%-.5hd ", nb);
	printf("\n\n");
	
	ft_printf("size:%5hd ", nb);
	printf("\n");
	dprintf(2, "size:%5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + space:% 5hd ", nb);
	printf("\n");
	dprintf(2, "size + space:% 5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + plus:%+5hd ", nb);
	printf("\n");
	dprintf(2, "size + plus:%+5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + minus:%-5hd ", nb);
	printf("\n");
	dprintf(2, "size + minus:%-5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + 0:%05hd ", nb);
	printf("\n");
	dprintf(2, "size + 0:%05hd ", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%+05hd ", nb);
	printf("\n");
	dprintf(2, "size + 0 + plus:%+05hd ", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + plus:%0+5hd ", nb);
	printf("\n");
	dprintf(2, "size + 0 + plus:%0+5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + 0 + prec:%05.3hd ", nb);
	printf("\n");
	dprintf(2, "size + 0 + prec:%05.3hd ", nb);
	printf("\n\n");
	
	ft_printf("size + minus + prec:%-5.3hd ", nb);
	printf("\n");
	dprintf(2, "size + minus + prec:%-5.3hd ", nb);
	printf("\n\n");
	
	ft_printf("size + plus + 0 + prec:%+05.3hd ", nb);
	printf("\n");
	dprintf(2, "size + plus + 0 + prec:%+05.3hd ", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:%0 5hd ", nb);
	printf("\n");
	dprintf(2, "size + espace + zero + prec:%0 5hd ", nb);
	printf("\n\n");
	
	ft_printf("size + espace + zero + prec:% 05.3hd ", nb);
	printf("\n");
	dprintf(2, "size + espace + zero + prec:% 05.3hd ", nb);
	printf("\n\n");
	
	ft_printf("size + minus + plus + prec:%-+5.3hd| ", nb);
	printf("\n");
	dprintf(2, "size + minus + plus + prec:%-+5.3hd| ", nb);
	printf("\n\n");

}
