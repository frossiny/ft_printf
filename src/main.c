/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2018/12/06 17:49:46 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"

int main(int argc, char *argv[])
{
	int		test = 42;
	char	str[] = "Bonjour";
	double	health = 0.42;
	char	c = 'X';

	char format[] = "%s %c\n";
	/*if (argc != 2)
		printf(format, str, c);
	else
		printf(argv[1], str, c);*/
	if (argc != 2)
		ft_printf(format, str, c);
	else
		ft_printf(argv[1], str, c);

	printf("%-+4d", test);
}
