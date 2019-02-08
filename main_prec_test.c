/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_prec_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratin <ratin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:24:39 by ratin             #+#    #+#             */
/*   Updated: 2019/02/04 15:01:07 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main	(void)
{
	int		nb;
	int		ret;
	int		ret2;

     nb = 0;
	ret = ft_printf("null prec : %+.0d\n", nb);
	ret2 = dprintf(2, "null prec : %+.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = 8;
	ret = ft_printf("null prec : %+.0d\n", nb);
	ret2 = dprintf(2, "null prec : %+.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = -1234212;
	ret = ft_printf("null prec : %+.0d\n", nb);
	ret2 = dprintf(2, "null prec : %+.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = 0;
	ret = ft_printf("null prec : %.0d\n", nb);
	ret2 = dprintf(2, "null prec : %.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = 8;
	ret = ft_printf("null prec : %.0d\n", nb);
	ret2 = dprintf(2, "null prec : %.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = -1234212;
	ret = ft_printf("null prec : %.0d\n", nb);
	ret2 = dprintf(2, "null prec : %.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	nb = 0;
	ret = ft_printf("null prec : %+.0d\n", nb);
	ret2 = dprintf(2, "null prec : %+.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	ret = ft_printf("null prec : %+.d\n", nb);
	ret2 = dprintf(2, "null prec : %+.d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	ret = ft_printf("null prec : %.0d\n", nb);
	ret2 = dprintf(2, "null prec : %.0d\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2); 

	 	nb = 0;
	ret = ft_printf("null prec : %012.0d|\n", nb);
	ret2 = dprintf(2, "null prec : %012.0d|\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	ret = ft_printf("null prec : %-.0d|\n", nb);
	ret2 = dprintf(2, "null prec : %-.0d|\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2);

	ret = ft_printf("null prec : %-12.0d|\n", nb);
	ret2 = dprintf(2, "null prec : %-12.0d|\n", nb);
	printf("ret = %d et ret2 = %d\n\n", ret, ret2); 

	return (0);
}
