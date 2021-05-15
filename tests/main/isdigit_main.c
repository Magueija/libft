#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISDIGIT
    printf("\n");

    puts("#################");
    puts("## ft_isdigit\n");

    // Test0
    char str_isdigit0 = '0';
    printf("0.Original: |%c| \n", str_isdigit0);
    printf("Exp: |%i| \n", isdigit(str_isdigit0));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit0));

    // Test1
    int str_isdigit1 = '3';
    printf("1.Original: |%c| \n", str_isdigit1);
    printf("Exp: |%i| \n", isdigit(str_isdigit1));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit1));

    // Test2
    char str_isdigit2 = 57;
    printf("2.Original: |%c| \n", str_isdigit2);
    printf("Exp: |%i| \n", isdigit(str_isdigit2));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit2));

    // Test3
    char str_isdigit3 = '/';
    printf("3.Original: |%c| \n", str_isdigit3);
    printf("Exp: |%i| \n", isdigit(str_isdigit3));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit3));

    // Test4
    int str_isdigit4 = 58;
    printf("4.Original: |%c| \n", str_isdigit4);
    printf("Exp: |%i| \n", isdigit(str_isdigit4));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit4));

    // Test5
    char str_isdigit5 = 'a';
    printf("5.Original: |%c| \n", str_isdigit5);
    printf("Exp: |%i| \n", isdigit(str_isdigit5));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit5));

    // Test6
    char str_isdigit6 = 10;
    printf("6.Original: |%c| \n", str_isdigit6);
    printf("Exp: |%i| \n", isdigit(str_isdigit6));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit6));

    // Test7
    char str_isdigit7 = 171;
    printf("7.Original: |%c| \n", str_isdigit7);
    printf("Exp: |%i| \n", isdigit(str_isdigit7));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit7));
    
    // Test8
    char str_isdigit8 = -5;
    printf("8.Original: |%c| \n", str_isdigit8);
    printf("Exp: |%i| \n", isdigit(str_isdigit8));
    printf("Res: |%i| \n\n", ft_isdigit(str_isdigit8));

    return (0);
}