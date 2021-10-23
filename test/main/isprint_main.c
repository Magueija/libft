#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISPRINT
    printf("\n");

    puts("#################");
    puts("## ft_isprint\n");

    // Test0
    char str_isprint0 = ' ';
    printf("0.Original: |%c| \n", str_isprint0);
    printf("Exp: |%i| \n", isprint(str_isprint0));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint0));

    // Test1
    int str_isprint1 = 127;
    printf("1.Original: |%c| \n", str_isprint1);
    printf("Exp: |%i| \n", isprint(str_isprint1));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint1));

    // Test2
    char str_isprint2 = 'A';
    printf("2.Original: |%c| \n", str_isprint2);
    printf("Exp: |%i| \n", isprint(str_isprint2));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint2));

    // Test3
    char str_isprint3 = 'a';
    printf("3.Original: |%c| \n", str_isprint3);
    printf("Exp: |%i| \n", isprint(str_isprint3));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint3));

    // Test4
    int str_isprint4 = '0';
    printf("4.Original: |%c| \n", str_isprint4);
    printf("Exp: |%i| \n", isprint(str_isprint4));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint4));

    // Test5
    char str_isprint5 = 159;
    printf("5.Original: |%c| \n", str_isprint5);
    printf("Exp: |%i| \n", isprint(str_isprint5));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint5));

    // Test6
    char str_isprint6 = 171;
    printf("6.Original: |%c| \n", str_isprint6);
    printf("Exp: |%i| \n", isprint(str_isprint6));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint6));

    // Test7
    char str_isprint7 = -5;
    printf("7.Original: |%c| \n", str_isprint7);
    printf("Exp: |%i| \n", isprint(str_isprint7));
    printf("Res: |%i| \n\n", ft_isprint(str_isprint7));

    return (0);
}