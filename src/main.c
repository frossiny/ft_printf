/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/17 17:50:14 by frossiny         ###   ########.fr       */
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
	//int r = ft_printf("M: |%5.2f| = |%03.2d| %         mdr\n", health, test);
	//int r2 = printf("O: |%5.2f| = |%03.2d| %         mdr\n", health, test);

	//printf("Count: %d = %d\n", r, r2);

	//printf("%lc", (wint_t)536);

	//ft_printf("b'% +0#-4.5hhs  %     9, b'foo'", NULL);
	//printf("\n");
	//printf("b'% +0#-4.5hhs  %     9, b'foo'", NULL);
;

	int r = ft_printf("%", 4294967295);
	printf("\n");
	int r2 = printf("%", 4294967295);
	printf("\n");

	printf("Return Values: %d/%d\n", r, r2);
}
