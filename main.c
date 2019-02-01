/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:58:19 by frossiny          #+#    #+#             */
/*   Updated: 2019/02/01 17:07:21 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Main de test

#include "ft_printf.h"
#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define INT_TO_BINARY_PATTERN BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN
#define LONG_TO_BINARY_PATTERN INT_TO_BINARY_PATTERN" "INT_TO_BINARY_PATTERN
#define LDOUBLE_TO_BINARY_PATTERN LONG_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN
#define I128_TO_BINARY_PATTERN LONG_TO_BINARY_PATTERN" "LONG_TO_BINARY_PATTERN
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main(int argc, char *argv[])
{
	int			test = 42;
	long long	llt = 18446744073709551615UL;
	char		str[] = "Bonjour";
	double		health = 0x7FF0000000000000;
	
	long double	tank = 0.333333333333333333L;
	char		c = 'a';

	union
	{
		double d;
		unsigned long ull;
	} 			finf;
	finf.ull = 0x7FF0000000000000;

	union
	{
		long double	d;
		__int128_t	ull;
	} 			lfinf;
	lfinf.ull = (__uint128_t)0x7FFF << 64;

	union
	{
		double d;
		unsigned long ull;
	} 			fnan;
	fnan.ull = finf.ull | 1;

	union
	{
		long double	d;
		__int128_t	ull;
	} 				lfnan;
	lfnan.ull = lfinf.ull | 1;
	
	union
	{
		long double	d;
		__uint128_t	bin;
	} 			zero;
	zero.bin = zero.bin | ((__uint128_t)1 << 79);

	char format[] = "%s, je suis %c %d mais j'ai pas %d heures de log\n";
	
	//lfinf.ull = lfinf.ull >> 64;
	printf("Is INF: %d\n", lfinf.ull == 0x7FFF);
	printf("lfinf: "LDOUBLE_TO_BINARY_PATTERN"\n",
		BYTE_TO_BINARY(lfinf.ull>>72), BYTE_TO_BINARY(lfinf.ull>>64),
		BYTE_TO_BINARY(lfinf.ull>>56), BYTE_TO_BINARY(lfinf.ull >> 48), BYTE_TO_BINARY(lfinf.ull>>40), BYTE_TO_BINARY(lfinf.ull>>32),
		BYTE_TO_BINARY(lfinf.ull>>24), BYTE_TO_BINARY(lfinf.ull >> 16), BYTE_TO_BINARY(lfinf.ull>>8), BYTE_TO_BINARY(lfinf.ull));

	printf("lfinf: "LDOUBLE_TO_BINARY_PATTERN"\n",
		BYTE_TO_BINARY((lfinf.ull>>64)>>72), BYTE_TO_BINARY((lfinf.ull>>64)>>64),
		BYTE_TO_BINARY((lfinf.ull>>64)>>56), BYTE_TO_BINARY((lfinf.ull>>64) >> 48), BYTE_TO_BINARY((lfinf.ull>>64)>>40), BYTE_TO_BINARY((lfinf.ull>>64)>>32),
		BYTE_TO_BINARY((lfinf.ull>>64)>>24), BYTE_TO_BINARY((lfinf.ull>>64) >> 16), BYTE_TO_BINARY((lfinf.ull>>64)>>8), BYTE_TO_BINARY((lfinf.ull>>64)));

	printf("lfinf: %ld\n", (long)(lfinf.ull>>64));

	/*printf("lfinf: "LDOUBLE_TO_BINARY_PATTERN"\n",
		BYTE_TO_BINARY(lfinf.ull>>120), BYTE_TO_BINARY(lfinf.ull >> 112), BYTE_TO_BINARY(lfinf.ull>>104), BYTE_TO_BINARY(lfinf.ull>>96),
		BYTE_TO_BINARY(lfinf.ull>>88), BYTE_TO_BINARY(lfinf.ull >> 80), BYTE_TO_BINARY(lfinf.ull>>72), BYTE_TO_BINARY(lfinf.ull>>64),
		BYTE_TO_BINARY(lfinf.ull>>56), BYTE_TO_BINARY(lfinf.ull >> 48), BYTE_TO_BINARY(lfinf.ull>>40), BYTE_TO_BINARY(lfinf.ull>>32),
		BYTE_TO_BINARY(lfinf.ull>>24), BYTE_TO_BINARY(lfinf.ull >> 16), BYTE_TO_BINARY(lfinf.ull>>8), BYTE_TO_BINARY(lfinf.ull));*/

	int r = ft_printf("M: |%-20s| = |%.9Lf|\n", str, (long double)21400999999007486795.6651642);
	int r2 = printf("O: |%-20s| = |%.9Lf|\n", str, (long double)21400999999007486795.6651642);
	printf("Count: %d = %d\n", r, r2);

	ft_printf("Long double: |%Lf|\n", (long double)-50.62);
	printf("Long double: |%Lf|\n", (long double)-50.62);

	ft_printf("Zero: |%Lf|\n", zero.d);
	printf("Zero: |%Lf|\n", zero.d);

	ft_printf("Double Inf: |%f|\n", finf.d);
	printf("Double Inf: |%f|\n", finf.d);

	ft_printf("LDouble Inf: |%Lf|\n", lfinf.d);
	printf("LDouble Inf: |%Lf|\n", lfinf.d);

	ft_printf("Double NaN: |%f|\n", fnan.d);
	printf("Double NaN: |%f|\n", fnan.d);

	ft_printf("LDouble NaN: |%Lf|\n", lfnan.d);
	printf("LDouble NaN: |%Lf|\n", lfnan.d);

	ft_printf("Precision: |%.20f|\n", 0.1);
	printf("Precision: |%.25f|\n", 0.1);

	/*
	ft_printf("Width: |%10.2147483646d|\n", 20);
	printf("Width: |%10.2147483646d|\n", 20);
	*/
}

