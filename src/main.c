/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/12 14:31:29 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"

int main(int argc, char *argv[])
{
	int		test = 42;
	long long llt = 9999999999999999;
	char	str[] = "Bonjour";
	double	health = 0.42;
	long double tank = 0.333333333333333333L;
	char	c = 'X';

	char format[] = "%d %d %lld %s %f %10Lf\n";
	/*if (argc != 2)
		printf(format, str, c);
	else
		printf(argv[1], str, c);*/
	if (argc != 2)
		ft_printf(format, test, test / 2, llt, str, health, tank);
	else
		ft_printf(argv[1], test, test / 2, llt, str, health, tank);

	//printf("%%%d\n", test);
}
