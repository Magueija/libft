#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISALNUM
    printf("\n");

    puts("#################");
    puts("## ft_isalnum\n");

    // Test0
    char str_isalnum0 = 'a';
    printf("0.Original: |%c| \n", str_isalnum0);
    printf("Exp: |%i| \n", isalnum(str_isalnum0));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum0));

    // Test1
    int str_isalnum1 = 104;
    printf("1.Original: |%c| \n", str_isalnum1);
    printf("Exp: |%i| \n", isalnum(str_isalnum1));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum1));

    // Test2
    char str_isalnum2 = 'z';
    printf("2.Original: |%c| \n", str_isalnum2);
    printf("Exp: |%i| \n", isalnum(str_isalnum2));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum2));

    // Test3
    char str_isalnum3 = 'A';
    printf("3.Original: |%c| \n", str_isalnum3);
    printf("Exp: |%i| \n", isalnum(str_isalnum3));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum3));

    // Test4
    int str_isalnum4 = 72;
    printf("4.Original: |%c| \n", str_isalnum4);
    printf("Exp: |%i| \n", isalnum(str_isalnum4));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum4));

    // Test5
    char str_isalnum5 = 'Z';
    printf("5.Original: |%c| \n", str_isalnum5);
    printf("Exp: |%i| \n", isalnum(str_isalnum5));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum5));

    // Test6
    char str_isalnum6 = '0';
    printf("6.Original: |%c| \n", str_isalnum6);
    printf("Exp: |%i| \n", isalnum(str_isalnum6));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum6));

    // Test7
    char str_isalnum7 = '5';
    printf("7.Original: |%c| \n", str_isalnum7);
    printf("Exp: |%i| \n", isalnum(str_isalnum7));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum7));

    // Test8
    char str_isalnum8 = '9';
    printf("8.Original: |%c| \n", str_isalnum8);
    printf("Exp: |%i| \n", isalnum(str_isalnum8));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum8));

    // Test9
    char str_isalnum9 = '!';
    printf("9.Original: |%c| \n", str_isalnum9);
    printf("Exp: |%i| \n", isalnum(str_isalnum9));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum9));

    // Test10
    char str_isalnum10 = 94;
    printf("10.Original: |%c| \n", str_isalnum10);
    printf("Exp: |%i| \n", isalnum(str_isalnum10));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum10));

    // Test11
    char str_isalnum11 = 123;
    printf("11.Original: |%c| \n", str_isalnum11);
    printf("Exp: |%i| \n", isalnum(str_isalnum11));
    printf("Res: |%i| \n\n", ft_isalnum(str_isalnum11));

    return (0);
}