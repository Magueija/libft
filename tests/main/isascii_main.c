#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISASCII
    printf("\n");

    puts("#################");
    puts("## ft_isascii\n");

    // Test0
    char str_isascii0 = ' ';
    printf("0.Original: |%c| \n", str_isascii0);
    printf("Exp: |%i| \n", isascii(str_isascii0));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii0));

    // Test1
    int str_isascii1 = 127;
    printf("1.Original: |%c| \n", str_isascii1);
    printf("Exp: |%i| \n", isascii(str_isascii1));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii1));

    // Test2
    char str_isascii2 = 'A';
    printf("2.Original: |%c| \n", str_isascii2);
    printf("Exp: |%i| \n", isascii(str_isascii2));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii2));

    // Test3
    char str_isascii3 = 'a';
    printf("3.Original: |%c| \n", str_isascii3);
    printf("Exp: |%i| \n", isascii(str_isascii3));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii3));

    // Test4
    int str_isascii4 = '0';
    printf("4.Original: |%c| \n", str_isascii4);
    printf("Exp: |%i| \n", isascii(str_isascii4));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii4));

    // Test5
    char str_isascii5 = 0;
    printf("5.Original: |%c| \n", str_isascii5);
    printf("Exp: |%i| \n", isascii(str_isascii5));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii5));

    // Test6
    char str_isascii6 = 127;
    printf("6.Original: |%c| \n", str_isascii6);
    printf("Exp: |%i| \n", isascii(str_isascii6));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii6));

    // Test7
    char str_isascii7 = 171;
    printf("7.Original: |%c| \n", str_isascii7);
    printf("Exp: |%i| \n", isascii(str_isascii7));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii7));
    
    // Test8
    char str_isascii8 = -5;
    printf("8.Original: |%c| \n", str_isascii8);
    printf("Exp: |%i| \n", isascii(str_isascii8));
    printf("Res: |%i| \n\n", ft_isascii(str_isascii8));

    return (0);
}