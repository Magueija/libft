#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISSPACE
    printf("\n");

    puts("#################");
    puts("## ft_isspace\n");

    // Test0
    char str_isspace0 = ' ';
    printf("0.Original: |%c| \n", str_isspace0);
    printf("Exp: |%i| \n", isspace(str_isspace0));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace0));

    // Test1
    char str_isspace1 = '\f';
    printf("1.Original: |%c| \n", str_isspace1);
    printf("Exp: |%i| \n", isspace(str_isspace1));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace1));

    // Test2
    char str_isspace2 = '\n';
    printf("2.Original: |%c| \n", str_isspace2);
    printf("Exp: |%i| \n", isspace(str_isspace2));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace2));

    // Test3
    char str_isspace3 = '\r';
    printf("3.Original: |%c| \n", str_isspace3);
    printf("Exp: |%i| \n", isspace(str_isspace3));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace3));

    // Test4
    char str_isspace4 = '\t';
    printf("4.Original: |%c| \n", str_isspace4);
    printf("Exp: |%i| \n", isspace(str_isspace4));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace4));

    // Test5
    char str_isspace5 = '\v';
    printf("5.Original: |%c| \n", str_isspace5);
    printf("Exp: |%i| \n", isspace(str_isspace5));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace5));

    // Test6
    char str_isspace6 = '5';
    printf("6.Original: |%c| \n", str_isspace6);
    printf("Exp: |%i| \n", isspace(str_isspace6));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace6));

    // Test7
    char str_isspace7 = 'A';
    printf("7.Original: |%c| \n", str_isspace7);
    printf("Exp: |%i| \n", isspace(str_isspace7));
    printf("Res: |%i| \n\n", ft_isspace(str_isspace7));

    return (0);
}