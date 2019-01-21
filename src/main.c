/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/21 16:49:58 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"

int main(int argc, char *argv[])
{
	int			test = 42;
	long long	llt = 9999999999999999;
	char		str[] = "Bonjour\0";
	double		health = 10.03;
	union
	{
		double d;
		unsigned long long ull;
	} 			un;
	long double	tank = 0.333333333333333333L;
	char		c = 'a';

	un.ull = 0x7FFFFFFFFFFFFFFF;

	char format[] = "%s, je suis %c %d mais j'ai pas %d heures de log\n";
	/*if (argc != 2)
		printf(format, str, c);
	else
		printf(argv[1], str, c);*/
	/*if (argc != 2)
		ft_printf(format, str, c, test, -test / 2);
	else
		ft_printf(argv[1], str, c, test, -test / 2);
	ft_putchar('\n');
	printf(argv[1], str, c, test, -test / 2);*/
	int r = ft_printf("M: |%5.2f| = |%03.2d| %         mdr\n", health, test);
	//int r2 = printf("O: |%5.2f| = |%03.2d| %         mdr\n", health, test);

	//printf("Count: %d = %d\n", r, r2);

	//printf("%lc", (wint_t)536);

	//ft_printf("b'% +0#-4.5hhs  %     9, b'foo'", NULL);
	//printf("\n");
	//printf("b'% +0#-4.5hhs  %     9, b'foo'", NULL);

	/*
	int r = ft_printf("%", 4294967295);
	printf("\n");
	int r2 = printf("%", 4294967295);
	printf("\n");

	printf("Return Values: %d/%d\n", r, r2);
	*/
/*
	double		nb;
	nb = 0;

	ft_printf("test basique:\n");
    ft_printf("space:% f|\n", nb);
		printf( "space:% f|\n", nb);
    ft_printf("plus:%+f|\n", nb);
		printf( "plus:%+f|\n", nb);
    ft_printf("hash:%#f|\n", nb);
		printf( "hash:%#f|\n", nb);
    ft_printf("precision:%.2f|\n", nb);
		printf( "precision:%.2f|\n", nb);
    ft_printf("big prec:%.14f|\n", nb);
		printf( "big prec:%.14f|\n", nb);
    ft_printf("precision + hash:%#.0f|\n", nb);
		printf( "precision + hash:%#.0f|\n", nb);
    ft_printf("space + prec:% .5f|\n", nb);
		printf( "space + prec:% .5f|\n", nb);
    ft_printf("space + prec + hash:%# .0f|\n", nb);
		printf( "space + prec + hash:%# .0f|\n", nb);
    ft_printf("space + prec + hash:% #.0f|\n", nb);
		printf( "space + prec + hash:% #.0f|\n", nb);
    ft_printf("Plus + prec / grande:%+.5f|\n", nb);
		printf( "Plus + prec / grande:%+.5f|\n", nb);
    ft_printf("Plus + prec / petite:%+.0f|\n", nb);
		printf( "Plus + prec / petite:%+.0f|\n", nb);
    ft_printf("Plus + prec + hash:%#+.0f|\n", nb);
		printf( "Plus + prec + hash:%#+.0f|\n", nb);
    ft_printf("Prec + 0:%0.5f|\n", nb);
		printf( "Prec + 0:%0.5f|\n", nb);
    ft_printf("Prec + minus:%-.5f|\n", nb);
		printf( "Prec + minus:%-.5f|\n", nb);
	ft_printf("size:%5f|\n", nb);
		printf( "size:%5f|\n", nb);
    ft_printf("size + plus:%+5f|\n", nb);
		printf( "size + plus:%+5f|\n", nb);
	ft_printf("size + space:% 5f|\n", nb);
		printf( "size + space:% 5f|\n", nb);
    ft_printf("size + space:%# 5f|\n", nb);
			printf( "size + space:%# 5f|\n", nb);
    ft_printf("size + plus:%#+5f|\n", nb);
		printf( "size + plus:%#+5f|\n", nb);
    ft_printf("size + minus:%-5f|\n", nb);
		printf( "size + minus:%-5f|\n", nb);
	ft_printf("size + 0:%05f|\n", nb);
		printf( "size + 0:%05f|\n", nb);
	ft_printf("size + 0 + plus:%+05f|\n", nb);
		printf( "size + 0 + plus:%+05f|\n", nb);
    ft_printf("size + 0 + plus:%0+5f|\n", nb);
		printf( "size + 0 + plus:%0+5f|\n", nb);
    ft_printf("size + 0 + prec:%05.3f|\n", nb);
		printf( "size + 0 + prec:%05.3f|\n", nb);
    ft_printf("size + 0 + prec + hash:%0#5.0f|\n", nb);
		printf( "size + 0 + prec + hash:%0#5.0f|\n", nb);
    ft_printf("size + minus + prec:%-5.3f|\n", nb);
		printf( "size + minus + prec:%-5.3f|\n", nb);
    ft_printf("size + minus + prec + hash:%-#5.0f|\n", nb);
		printf( "size + minus + prec + hash:%-#5.0f|\n", nb);
    ft_printf("size + plus + 0 + prec:%+05.3f|\n", nb);
		printf( "size + plus + 0 + prec:%+05.3f|\n", nb);
    ft_printf("size + plus + 0 + prec + hash:%0+#5.0f|\n", nb);
		printf( "size + plus + 0 + prec + hash:%0+#5.0f|\n", nb);
    ft_printf("size + espace + zero + prec:%0 5.3f|\n", nb);
		printf( "size + espace + zero + prec:%0 5.3f|\n", nb);
    ft_printf("size + espace + zero + prec:% 05.3f|\n", nb);
		printf( "size + espace + zero + prec:% 05.3f|\n", nb);
    ft_printf("size + espace + zero + prec + hash:%#0 5.0f|\n", nb);
		printf( "size + espace + zero + prec + hash:%#0 5.0f|\n", nb);
    ft_printf("size + minus + plus + prec:%-+5.3f|\n", nb);
		printf( "size + minus + plus + prec:%-+5.3f|\n", nb);
    ft_printf("size + minus + plus + prec + hash:%-#+5.0f|\n", nb);
		printf( "size + minus + plus + prec + hash:%-#+5.0f|\n", nb);*/
/*
	int i = 2147483647;
	long l = 2147483647;
	long long ll = -9223372036854775807 -1;
	intmax_t im = 9223372036854775807;

	ft_printf("%o\n", 0);
	ft_printf("%lld\n", ll);
	*/
}
