/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/15 15:03:40 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"

int main(int argc, char *argv[])
{
	int			test = 42;
	long long	llt = 9999999999999999;
	char		str[] = "Bonjour";
	double		health = 0x7FF0000000000000;
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
	int r = ft_printf("M: |%-20s| = |%f|\n", str, un.d);
	int r2 = printf("O: |%-20s| = |%f|\n", str, un.d);

	printf("Count: %d = %d\n", r, r2);

	ft_printf("%.2s is a string\n", "this");
	//ft_putchar('\n');
	printf("%.2s is a string\n", "this");

	ft_putchar('\n');

	ft_printf("%.0s is a string\n", "this");
//	ft_putchar('\n');
	printf("%.0s is a string\n", "this");

	ft_putchar('\n');
	ft_putchar('\n');
	ft_printf("|%5.2s is a string|", "this");
	
}
