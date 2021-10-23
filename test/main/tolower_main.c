#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_TOLOWER
    printf("\n");

    puts("#################");
    puts("## ft_tolower\n");

    // Test0
    char str_tolower0 = 'A';
    printf("0.Original: |%c| \n", str_tolower0);
    printf("Exp: |%c| \n", tolower(str_tolower0));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower0));

    // Test1
    int str_tolower1 = 72;
    printf("1.Original: |%c| \n", str_tolower1);
    printf("Exp: |%c| \n", tolower(str_tolower1));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower1));

    // Test2
    char str_tolower2 = 'Z';
    printf("2.Original: |%c| \n", str_tolower2);
    printf("Exp: |%c| \n", tolower(str_tolower2));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower2));

    // Test3
    char str_tolower3 = 'a';
    printf("3.Original: |%c| \n", str_tolower3);
    printf("Exp: |%c| \n", tolower(str_tolower3));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower3));

    // Test4
    int str_tolower4 = 104;
    printf("4.Original: |%c| \n", str_tolower4);
    printf("Exp: |%c| \n", tolower(str_tolower4));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower4));

    // Test5
    char str_tolower5 = 'z';
    printf("5.Original: |%c| \n", str_tolower5);
    printf("Exp: |%c| \n", tolower(str_tolower5));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower5));

    // Test6
    char str_tolower6 = '!';
    printf("6.Original: |%c| \n", str_tolower6);
    printf("Exp: |%c| \n", tolower(str_tolower6));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower6));

    // Test7
    char str_tolower7 = 94;
    printf("7.Original: |%c| \n", str_tolower7);
    printf("Exp: |%c| \n", tolower(str_tolower7));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower7));

    // Test8
    char str_tolower8 = 123;
    printf("8.Original: |%c| \n", str_tolower8);
    printf("Exp: |%c| \n", tolower(str_tolower8));
    printf("Res: |%c| \n\n", ft_tolower(str_tolower8));

    return (0);
}