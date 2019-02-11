/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 21:10:29 by ratin             #+#    #+#             */
/*   Updated: 2019/02/08 19:24:53 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{
	int	nbr = 4253;
	unsigned int unbr = -429;
	int	result;
	char str[] = "vfjsadfklji la string de test";


/* TEST DE CONVERT BASE */
	//printf("conversion = %s\n", ft_convert_base_finale("432", "0123456789", "0123456789abcdef"));
	/*printf("\n------test de la conversion 'NULL'-------\n\n");
	result = ft_printf(NULL);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");
*/
/*
	printf("\n------test de la conversion 'p'-------\n\n");
	result = ft_printf("mon printf = |%-10p|\n", str);
				printf("rea printf = |%-10p|\n", str);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 'd'-------\n\n");
	result = ft_printf("mon printf = |%-24d|\n", nbr);
				printf("rea printf = |%-24d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");
 
	result = ft_printf("mon printf = |% 025d|\n", nbr);
				printf("rea printf = |% 025d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |% d|\n", nbr);
				printf("rea printf = |% d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test du flag '+'-------\n\n");
	result = ft_printf("mon printf = |%+24d|\n", nbr);
				printf("rea printf = |%+24d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%+024d|\n", nbr);
				printf("rea printf = |%+024d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la precision (d,i)-------\n\n");
	result = ft_printf("mon printf = |%-24.20d|\n", nbr);
				printf("rea printf = |%-24.20d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%24.13d|\n", nbr);
				printf("rea printf = |%24.13d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-24.13d|\n", nbr);
				printf("rea printf = |%-24.13d|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-.33i|\n", nbr);
				printf("mon printf = |%-.33i|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 'u'-------\n\n");
	result = ft_printf("mon printf = |%024.14u|\n", unbr);
				printf("rea printf = |%024.14u|\n", unbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%024.3u|\n", unbr);
				printf("rea printf = |%024.3u|\n", unbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%.43u|\n", unbr);
				printf("rea printf = |%.43u|\n", unbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%32u|\n", unbr);
				printf("rea printf = |%32u|\n", unbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	printf("\n------test de la conversion 'x'-------\n\n");
	result = ft_printf("mon printf = |%-24x|\n", nbr);
				printf("rea printf = |%-24x|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-#32x|\n", nbr);
				printf("rea printf = |%-#32x|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-#32X|\n", nbr);
				printf("rea printf = |%-#32X|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%0#32X|\n", nbr);
				printf("rea printf = |%0#32X|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%#32X|\n", 0);
				printf("rea printf = |%#32X|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32.8X|\n", nbr);
				printf("rea printf = |%-32.8X|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%12.11X|\n", nbr);
				printf("rea printf = |%12.11X|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%30.2x|\n", nbr);
				printf("rea printf = |%30.2x|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%30.20x|\n", nbr);
				printf("rea printf = |%30.20x|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 'o'-------\n\n");

	result = ft_printf("mon printf = |%-24o|\n", nbr);
				printf("rea printf = |%-24o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-#32o|\n", nbr);
				printf("rea printf = |%-#32o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-24o|\n", 0);
				printf("rea printf = |%-24o|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-#24o|\n", 0);
				printf("rea printf = |%-#24o|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%#24o|\n", 0);
				printf("rea printf = |%#24o|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%#24.o|\n", 0);
				printf("rea printf = |%#24.o|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32o|\n", nbr);
				printf("rea printf = |%-32o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

 	result = ft_printf("mon printf = |%-#32o|\n", nbr);
				printf("rea printf = |%-#32o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%0#32o|\n", nbr);
				printf("rea printf = |%0#32o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32.8o|\n", nbr);
				printf("rea printf = |%-32.8o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%32.8o|\n", nbr);
				printf("rea printf = |%32.8o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%12.11o|\n", nbr);
				printf("rea printf = |%12.11o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%#30.24o|\n", nbr);
				printf("lrea printf = |%#30.24o|\n", nbr);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%#30.24o|\n", 0);
				printf("lrea printf = |%#30.24o|\n", 0);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 'l'-------\n\n");

	unsigned long long int	sht = 18446744073709551615ULL;

	result = ft_printf("mon printf = |%-24lld|\n", sht);
				printf("rea printf = |%-24lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32lld|\n", sht);
				printf("rea printf = |%-32lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-2lld|\n", sht);
				printf("rea printf = |%-2lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%032lld|\n", sht);
				printf("rea printf = |%032lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32.23lld|\n", sht);
				printf("rea printf = |%-32.23lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%32.2lld|\n", sht);
				printf("rea printf = |%32.2lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	result = ft_printf("mon printf = |%12.11lld|\n", sht);
				printf("rea printf = |%12.11lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%-30.24lld|\n", sht);
				printf("lrea printf = |%-30.24lld|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	printf("888888888888888888888888888888888888888888\n");
	result = ft_printf("lmon printf = |%30.24llu|\n", sht);
				printf("lrea printf = |%30.24llu|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");
	result = ft_printf("lmon printf = |%30.24llx|\n", sht);
				printf("lrea printf = |%30.24llx|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%30.24llo|\n", sht);
				printf("lrea printf = |%30.24llo|\n", sht);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 'h'-------\n\n");

	short		max = 32534;

	result = ft_printf("mon printf = |%-24hd|\n", max);
				printf("rea printf = |%-24hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32hd|\n", max);
				printf("rea printf = |%-32hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-2hd|\n", max);
				printf("rea printf = |%-2hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%032hd|\n", max);
				printf("rea printf = |%032hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%-32.23hd|\n", max);
				printf("rea printf = |%-32.23hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("mon printf = |%32.2hd|\n", max);
				printf("rea printf = |%32.2hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	result = ft_printf("mon printf = |%12.11hd|\n", max);
				printf("rea printf = |%12.11hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%-30.24hd|\n", max);
				printf("lrea printf = |%-30.24hd|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	printf("888888888888888888888888888888888888888888\n");
	result = ft_printf("lmon printf = |%30.24hu|\n", max);
				printf("lrea printf = |%30.24hu|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%30.24hx|\n", max);
				printf("lrea printf = |%30.24hx|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	result = ft_printf("lmon printf = |%30.24ho|\n", max);
				printf("lrea printf = |%30.24ho|\n", max);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");

	printf("\n------test de la conversion 's'-------\n\n");

	char *string = "test conversion de s";
	result = ft_printf("lmon printf = |%-34s|\n", string);
				printf("lrea printf = |%-34s|\n", string);
	printf("ma fonction printf renvoie : %d\n", result);
	printf("\n");


	printf("\n------test de la conversion 'f et L'-------\n\n");

	printf("Rea printf : %.11Lf\n",192326.62L); 
	ft_printf("Mon printf : %.11Lf\n", 192326.62L);
	ft_putchar('\n');
	printf("Rea printf : %.11lf\n",192326.62); 
	ft_printf("Mon printf : %.11lf\n",192326.62);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	printf("Rea printf :%043.18f\n",1234567891.313432);
	ft_printf("Mon printf :%043.18f\n",1234567891.313432);
	ft_putchar('\n');
	printf("Rea printf :%077.18f\n",1239994561.313511432);
	ft_printf("Mon printf :%077.18f\n",1239994561.313511432);
	ft_putchar('\n');
	printf("Rea printf char :: %cR:%#0.f int %d\n",'a',125.3,10);
	ft_printf("Mon printf char :: %cM:%#0.f int %d\n",'a',125.3,10);
	ft_putchar('\n');
	printf("tRea printf :%044.18f\n",-1234567891.313432);
	ft_printf("tMon printf :%044.18f\n",-1234567891.313432);
	ft_putchar('\n');
	printf("tRea printf :%+044.18f\n",1234567891.313432);
	ft_printf("tMon printf :%+044.18f\n",1234567891.313432);
	ft_putchar('\n');
	printf("tRea printf :%+044.18Lf\n",1234567891.313432L);
	ft_printf("tMon printf :%+044.18Lf\n",1234567891.313432L);
	ft_putchar('\n');
	ft_putchar('\n');

	printf("\n------test de la conversion 'lld'-------\n\n");
	printf("Rea printf :%ld\n",9223372036854775807);
	ft_printf("Mon printf :%ld\n",9223372036854775807);


	printf("\n------test de la convesion bunus'z with fields'-------\n\n");
	printf("%zu\n",(size_t)192);
	ft_printf("%zu\n",(size_t)192);

	ft_putchar('\n');

	printf("%17zu\n",(size_t)192);
	ft_printf("%17zu\n",(size_t)192);

	printf("Rea printf :%-10cvoila\n",4+48);
	ft_printf("Mon printf :%-10cvoila\n",4+48);

	ft_putchar('\n');

	printf("Rea printf :%cvoila\n",4+48);
	ft_printf("Mon printf :%cvoila\n",4+48);
	ft_putchar('\n');
	ft_putchar('\n');


	printf("\n------test de la conversion 'b : en bonus'-------\n\n");

	ft_printf("%b\n",10);
	ft_printf("%b\n",0);
	ft_printf("%b\n",-10);

	ft_putchar('\n');
	ft_putchar('\n');

	printf("\n------test de la conversion 'm : en bonus'-------\n\n");
	char x[] = "Hello Wolrd";
	ft_printf("%mG\n",x);

	ft_putchar('\n');
	ft_putchar('\n');


	printf("rRea printf :|%33.18f|\n",-1234567891.313432);
	ft_printf("rMon printf :|%33.18f|\n",-1234567891.313432);
	ft_putchar('\n'); 

	//printf("Rea printf :%.4%\n");
	//ft_printf("Mon printf :%.4%\n");

	int	ret;
	ret = ft_printf("hello ca%----4c| %1c va %10c|%-c| ??|", '\0', '\n', (char)564, 0);
	printf("\nret = %d\n", ret);
	printf("\n\n");
	printf("hello ca%----4c| %1c va %10c|%-c| ??|", '\0', '\n', (char)564, 0);

/* 	printf("Rea printf :% d\n", 12);
	ft_printf("Rea printf :% d\n", 12); */

	printf("Rea printf: %.*d\n", 10, 123);
	ft_printf("Mon printf: %.*d\n", 10, 123);
	ft_putchar('\n'); 

	printf("Rea printf: %*d\n", 10, 123);
	ft_printf("Mon printf: %*d\n", 10, 123);
	ft_putchar('\n');

	printf("Rea printf: |%*d|\n", -10, 123);
	ft_printf("Mon printf: |%*d|\n", -10, 123);
	ft_putchar('\n');

	printf("{%.*d}\n", -5, 42);
	ft_printf("{%.*d}\n", -5, 42);
	ft_putchar('\n');

	printf("Rea printf: %*.*f\n", 15, 2, 123.4567);
	ft_printf("Mon printf: %*.*f\n", 15, 2, 123.4567);
	ft_putchar('\n');

	printf("Rea printf: %15*.*f\n", 10, 2, 123.4567);
	ft_printf("Mon printf: %15*.*f\n", 10, 2, 123.4567);
	ft_putchar('\n');

	printf("Rea printf: |%*15.3*f|\n", 10, 2, 123.4567);
	ft_printf("Mon printf: |%*15.3*f|\n", 10, 2, 123.4567);
	ft_putchar('\n');

	printf("Rea printf: |%15*.3*f|\n", 10, 2, 123.4567);
	ft_printf("Mon printf: |%15*.3*f|\n", 10, 2, 123.4567);
	ft_putchar('\n');

	printf("Rea printf: |%15*.*3f|\n", 10, 2, 123.4567);
	ft_printf("Mon printf: |%15*.*3f|\n", 10, 2, 123.4567);
	ft_putchar('\n');

	printf("--------- PREC ---------\n");

	printf("Rea printf: %.*3f\n", 2, 123.4567);
	ft_printf("Mon printf: %.*3f\n", 2, 123.4567);
	ft_putchar('\n');

	printf("Rea printf: %.3*f\n", 2, 123.4567);
	ft_printf("Mon printf: %.3*f\n", 2, 123.4567);
	ft_putchar('\n');

	printf("--------- WIDTH ---------\n");

	printf("Rea printf: %*3d\n", 2, 12);
	ft_printf("Mon printf: %*3d\n", 2, 12);
	ft_putchar('\n');

	printf("Rea printf: %3*d\n", 2, 12);
	ft_printf("Mon printf: %3*d\n", 2, 12);
	ft_putchar('\n');


	printf("Rea printf: |%*3d|\n", 7, 0);
	ft_printf("Mon printf: |%*3d|\n", 7, 0);
	ft_putchar('\n');

	printf("Rea printf: %   %\n");
	ft_printf("Mon printf: %   %\n");
	ft_putchar('\n');

	printf("Rea printf: %10%\n");
	ft_printf("Mon printf: %10%\n");
	ft_putchar('\n');

	printf("Rea printf: %15O\n", -9999999);
	ft_printf("Mon printf: %15O\n", -9999999);
	ft_putchar('\n');

	ft_putchar('\n');

}
