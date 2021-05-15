#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_ATOI
    printf("\n");

    puts("#################");
    puts("## ft_atoi\n");

    // Test0
    char str_atoi0[] = "0";
    printf("0.Original: |%s| \n", str_atoi0);
    printf("Exp: |%i| \n", atoi(str_atoi0));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi0));

    // Test1
    char str_atoi1[] = "1";
    printf("1.Original: |%s| \n", str_atoi1);
    printf("Exp: |%i| \n", atoi(str_atoi1));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi1));

    // Test2
    char str_atoi2[] = "-5";
    printf("2.Original: |%s| \n", str_atoi2);
    printf("Exp: |%i| \n", atoi(str_atoi2));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi2));

    // Test3
    char str_atoi3[] = "+1234567890";
    printf("3.Original: |%s| \n", str_atoi3);
    printf("Exp: |%i| \n", atoi(str_atoi3));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi3));

    // Test4
    char str_atoi4[] = "2147483647";
    printf("4.Original: |%s| \n", str_atoi4);
    printf("Exp: |%i| \n", atoi(str_atoi4));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi4));

    // Test5
    char str_atoi5[] = "-2147483648";
    printf("5.Original: |%s| \n", str_atoi5);
    printf("Exp: |%i| \n", atoi(str_atoi5));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi5));

    // Test6
    char str_atoi6[] = "-2147483640";
    printf("6.Original: |%s| \n", str_atoi6);
    printf("Exp: |%i| \n", atoi(str_atoi6));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi6));

    // Test7
    char str_atoi7[] = "\n\t\f\r\v    12 15";
    printf("7.Original: |%s| \n", str_atoi7);
    printf("Exp: |%i| \n", atoi(str_atoi7));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi7));

    // Test8
    char str_atoi8[] = "a 12A15";
    printf("8.Original: |%s| \n", str_atoi8);
    printf("Exp: |%i| \n", atoi(str_atoi8));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi8));

    // Test9
    puts("Note: the number is overflowing int, atoi also does the unexpected.");
    char str_atoi9[] = "214748364710";
    printf("9.Original: |%s| \n", str_atoi9);
    printf("Exp: |%i| \n", atoi(str_atoi9));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi9));

    // Test10
    puts("Note: the number is overflowing int, atoi also does the unexpected.");
    char str_atoi10[] = "-214748364850";
    printf("10.Original: |%s| \n", str_atoi10);
    printf("Exp: |%i| \n", atoi(str_atoi10));
    printf("Res: |%i| \n\n", ft_atoi(str_atoi10));
   
    return (0);
}
