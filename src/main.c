/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/14 17:14:00 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"

int main(int argc, char *argv[])
{
	int			test = 42;
	long long	llt = 9999999999999999;
	char		str[] = "Bonjour";
	double		health = 0.42;
	long double	tank = 0.333333333333333333L;
	char		c = 'a';

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
	ft_printf("M: |%-20s|\n", str);
	printf("O: |%-20s|\n", str);
}
