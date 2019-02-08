/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_f_special1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:07:02 by ratin             #+#    #+#             */
/*   Updated: 2019/02/08 15:43:40 by frossiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	double	nb;
	int		ret;
	int		ret2;

	nb = 1.0/0.0;
	ret = ft_printf("%f\n", nb);
	ret2 = dprintf(2,"%f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%12f\n", nb);
	ret2 = dprintf(2,"%12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%-12f\n", nb);
	ret2 = dprintf(2,"%-12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%5.9f\n", nb);
	ret2 = dprintf(2,"%5.9f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	nb = -1.0/0.0;
	ret = ft_printf("%f\n", nb);
	ret2 = dprintf(2,"%f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%12f\n", nb);
	ret2 = dprintf(2,"%12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%-12f\n", nb);
	ret2 = dprintf(2,"%-12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%5.9f\n", nb);
	ret2 = dprintf(2,"%5.9f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	nb = 0.0/0.0;
	ret = ft_printf("%f\n", nb);
	ret2 = dprintf(2,"%f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%12f\n", nb);
	ret2 = dprintf(2,"%12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%-12f\n", nb);
	ret2 = dprintf(2,"%-12f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	ret = ft_printf("%5.9f\n", nb);
	ret2 = dprintf(2,"%5.9f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);

	/*ret = ft_printf("%5000.9f\n", nb);
	ret2 = dprintf(2,"%5000.9f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
*/
	ret = ft_printf("%5.2f\n", nb);
	ret2 = dprintf(2,"%5.2f\n", nb);
	printf("ret = %d et ret2 = %d\n", ret, ret2);
}