/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_f45_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:31:38 by ratin             #+#    #+#             */
/*   Updated: 2019/02/13 13:54:41 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	double nb = 45.123456789;

	int ret;
	int	ret2;

	ret = ft_printf("test basique:");
	printf("\n");
	ret2 = dprintf(2, "test basique:");
	printf("\n");
	printf("ret =%d ret2 = %d", ret, ret2);
	printf("\n\n");
	
	ret = ft_printf("space:% f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "space:% f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("plus:%+f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "plus:%+f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("hash:%#f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "hash:%#f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("precision:%.2f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "precision:%.2f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("big prec:%.14f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "big prec:%.14f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("precision + hash:%#.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "precision + hash:%#.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("space + prec:% .5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "space + prec:% .5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "space + prec + hash:%# .0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "space + prec + hash:% #.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "Plus + prec / grande:%+.5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("Plus + prec / petite:%+.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "Plus + prec / petite:%+.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("Plus + prec + hash:%#+.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "Plus + prec + hash:%#+.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("Prec + 0:%0.5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "Prec + 0:%0.5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("Prec + minus:%-.5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "Prec + minus:%-.5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size:%5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size:%5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + space:% 5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + space:% 5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + plus:%+5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + plus:%+5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + space:%# 5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + space:%# 5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + plus:%#+5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + plus:%#+5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + minus:%-5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus:%-5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + 0:%05f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0:%05f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + 0 + plus:%+05f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + plus:%+05f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	

	ret = ft_printf("size + 0 + plus:%+05f\n", -nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + plus:%+05f\n", -nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + plus:%0+5f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + 0 + prec:%05.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + prec:%05.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + 0 + prec + hash:%0#5.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + minus + prec:%-5.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus + prec:%-5.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus + prec + hash:%-#5.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + plus + 0 + prec:%+05.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + espace + zero + prec:%0 5.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + espace + zero + prec:% 05.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + espace + zero + prec + hash:%#0 5.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus + plus + prec:%-+5.3f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);	
	printf("\n\n");	
	
	ret = ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("\n");
	ret2 = dprintf(2, "size + minus + plus + prec + hash:%-#+5.0f\n", nb);
	printf("ret =%d ret2 = %d", ret, ret2);

}
