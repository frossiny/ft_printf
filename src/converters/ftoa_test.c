/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:06:42 by frossiny          #+#    #+#             */
/*   Updated: 2019/01/11 12:54:50 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long unsigned		ft_pow(int a, int b)
{
	long long unsigned c;

	c = 1;
	while (b--)
		c *= a;
	return (c);
}

double	calc(int expo)
{
	double result;

	result = 1;
	if (expo > 0)
		while (expo--)
			result *= 2;
	else if (expo < 0)
		while (expo++)
			result /= 2;
	return (result);
}

void	handle_float(t_arg *arg)
{
	char	buf[512];
	
	//MSB for sign
	if (arg->data.ull & 0x8000000000000000)
		ft_putendl("Neg");

	long sign = arg->data.ull & 0x8000000000000000;
	long expo = ((arg->data.ull >> 52) & 0x7FF);
	if (expo > 0)
		expo = expo - 1023;
	long mantissa = expo > 0 ? (arg->data.ull | 0x10000000000000) << 11 : arg->data.ull << 11;

	double result = 0.0;
	int size = 0;
	while (size < 64)
	{
		if ((mantissa & 1) == 1)
			break;
		mantissa >>= 1;
		size++;
	}
	int mask = (1 << (64 - size - 1));

	ft_printf("Size: %d\n", size);

	unsigned long long test = (arg->data.ull | 0x10000000000000) << 11;
	test >>= size;
	
	while (64 - size++ > 0)
	{
		//ft_printf("%b\n%012b\n", test, mask);
		//printf("Calc: %f\n", calc(expo));
		result += (test & mask) > 0 ? calc(expo) : 0;
		printf("R: %f\n", result);
		expo--;
		mask >>= 1;
	}

	printf("Res: %f\n", result);

	int i = 0;
	ft_memset(buf, '0', 511);
	while (i < 66)
	{
		if (i == 64 || i == 52)
			buf[i++] = ' ';
		buf[i++] = '0' + (arg->data.ull & 1);
		arg->data.ull >>= 1;
	}
	buf[i] = '\0';
	ft_putendl(ft_strrev(buf));
	ft_printf("%b\n", 0x7FF0000000000000);

	//ft_printf("Float: %b %ld %b\n", sign, expo, mantissa);

	arg->str = ft_strdup((buf));
}
