#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
	char *s;

    // #################
    // ## ft_dtoa
    printf("\n");

    puts("#################");
    puts("## ft_dtoa\n");

    // Test0
    double str_ftoa0 = 0;
	s = ft_dtoa(str_ftoa0, 6);
    printf("0.Original: |%.0f| \n", str_ftoa0);
    printf("Exp: |%f| \n", str_ftoa0);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test1
    double str_ftoa1 = 3.14;
	s = ft_dtoa(str_ftoa1, 2);
    printf("1.Original: |%.2f| \n", str_ftoa1);
    printf("Exp: |%.2f| \n", str_ftoa1);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test2
    double str_ftoa2 = -5.5235235;
	s = ft_dtoa(str_ftoa2, 10);
    printf("2.Original: |%.1f| \n", str_ftoa2);
    printf("Exp: |%.10f| \n", str_ftoa2);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test3
    double str_ftoa3 = 12345.523;
	s = ft_dtoa(str_ftoa3, 0);
    printf("3.Original: |%.3f| \n", str_ftoa3);
    printf("Exp: |%.0f| \n", str_ftoa3);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test4
    double str_ftoa4 = 214748.145;
	s = ft_dtoa(str_ftoa4, 2);
    printf("4.Original: |%f| \n", str_ftoa4);
    printf("Exp: |%.2f| \n", str_ftoa4);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test5
    double str_ftoa5 = 346777.87655;
	s = ft_dtoa(str_ftoa5, 2);
    printf("5.Original: |%.5f| \n", str_ftoa5);
    printf("Exp: |%.2f| \n", str_ftoa5);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test6
    double str_ftoa6 = 0.0 / 0.0;
	s = ft_dtoa(str_ftoa6, 2);
    printf("5.Original: |%f| \n", str_ftoa6);
    printf("Exp: |%.2f| \n", str_ftoa6);
    printf("Res: |%s| \n\n", s);
	free(s);

    // Test7
    double str_ftoa7 = 2 / 0.0;
	s = ft_dtoa(str_ftoa7, 2);
    printf("6.Original: |%f| \n", str_ftoa7);
    printf("Exp: |%.2f| \n", str_ftoa7);
    printf("Res: |%s| \n\n", s);
	free(s);

    return (0);
}
