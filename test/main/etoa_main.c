/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   etoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:18:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/04/19 15:20:20 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int     main()
{
	char *s;

    // #################
    // ## ft_etoa
    printf("\n");

    puts("#################");
    puts("## ft_etoa\n");

    // Test0
    long double str_etoa0 = 0.0L;
	s = ft_etoa(str_etoa0, 6);
    printf("0.Original: |%.0lle| \n", str_etoa0);
    printf("Exp: |%lle| \n", str_etoa0);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test1
    long double str_etoa1 = 3.14L;
	s = ft_etoa(str_etoa1, 2);
    printf("1.Original: |%.2lle| \n", str_etoa1);
    printf("Exp: |%.2lle| \n", str_etoa1);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test2
    long double str_etoa2 = 2.2250738585072014e+300L;
	s = ft_etoa(str_etoa2, 6);
    printf("2.Original: |%lle| \n", str_etoa2);
    printf("Exp: |%lle| \n", str_etoa2);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test3
    long double str_etoa3 = 12345.523L;
	s = ft_etoa(str_etoa3, 0);
    printf("3.Original: |%.3lle| \n", str_etoa3);
    printf("Exp: |%.0lle| \n", str_etoa3);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test4
    long double str_etoa4 = 214748.145L;
	s = ft_etoa(str_etoa4, 2);
    printf("4.Original: |%lle| \n", str_etoa4);
    printf("Exp: |%.2lle| \n", str_etoa4);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test5
    long double str_etoa5 = 346777.87655L;
	s = ft_etoa(str_etoa5, 2);
    printf("5.Original: |%.5lle| \n", str_etoa5);
    printf("Exp: |%.2lle| \n", str_etoa5);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test6
    long double str_etoa6 = 0.0 / 0.0;
	s = ft_etoa(str_etoa6, 2);
    printf("5.Original: |%lle| \n", str_etoa6);
    printf("Exp: |%.2lle| \n", str_etoa6);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test7
    long double str_etoa7 = 2 / 0.0;
	s = ft_etoa(str_etoa7, 2);
    printf("6.Original: |%lle| \n", str_etoa7);
    printf("Exp: |%.2lle| \n", str_etoa7);
    printf("Res: |%s| \n\n", s);
	free(s);

    return (0);
}
