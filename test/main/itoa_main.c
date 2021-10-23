#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_ITOA
    printf("\n");

    puts("#################");
    puts("## ft_itoa\n");

    // Test0
    int str_itoa0 = 1234567890;
    printf("0.Original: |%i| \n", str_itoa0);
    printf("Exp: |1234567890| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa0));

    // Test1
    int str_itoa1 = -1234567890;
    printf("1.Original: |%i| \n", str_itoa1);
    printf("Exp: |-1234567890| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa1));

    // Test2
    int str_itoa2 = 0;
    printf("2.Original: |%i| \n", str_itoa2);
    printf("Exp: |0| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa2));

    // Test3
    int str_itoa3 = 1;
    printf("3.Original: |%i| \n", str_itoa3);
    printf("Exp: |1| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa3));

    // Test4
    int str_itoa4 = -1;
    printf("4.Original: |%i| \n", str_itoa4);
    printf("Exp: |-1| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa4));

    // Test5
    int str_itoa5 = 2147483647;
    printf("5.Original: |%i| \n", str_itoa5);
    printf("Exp: |2147483647| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa5));

    // Test6
    int str_itoa6 = -2147483648;
    printf("6.Original: |%i| \n", str_itoa6);
    printf("Exp: |-2147483648| \n");
    printf("Res: |%s| \n\n", ft_itoa(str_itoa6));
    
    return (0);
}