#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_TOUPPER
    printf("\n");

    puts("#################");
    puts("## ft_toupper\n");

    // Test0
    char str_toupper0 = 'a';
    printf("0.Original: |%c| \n", str_toupper0);
    printf("Exp: |%c| \n", toupper(str_toupper0));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper0));

    // Test1
    int str_toupper1 = 104;
    printf("1.Original: |%c| \n", str_toupper1);
    printf("Exp: |%c| \n", toupper(str_toupper1));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper1));

    // Test2
    char str_toupper2 = 'z';
    printf("2.Original: |%c| \n", str_toupper2);
    printf("Exp: |%c| \n", toupper(str_toupper2));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper2));

    // Test3
    char str_toupper3 = 'A';
    printf("3.Original: |%c| \n", str_toupper3);
    printf("Exp: |%c| \n", toupper(str_toupper3));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper3));

    // Test4
    int str_toupper4 = 72;
    printf("4.Original: |%c| \n", str_toupper4);
    printf("Exp: |%c| \n", toupper(str_toupper4));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper4));

    // Test5
    char str_toupper5 = 'Z';
    printf("5.Original: |%c| \n", str_toupper5);
    printf("Exp: |%c| \n", toupper(str_toupper5));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper5));

    // Test6
    char str_toupper6 = '!';
    printf("6.Original: |%c| \n", str_toupper6);
    printf("Exp: |%c| \n", toupper(str_toupper6));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper6));

    // Test7
    char str_toupper7 = 94;
    printf("7.Original: |%c| \n", str_toupper7);
    printf("Exp: |%c| \n", toupper(str_toupper7));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper7));

    // Test8
    char str_toupper8 = 123;
    printf("8.Original: |%c| \n", str_toupper8);
    printf("Exp: |%c| \n", toupper(str_toupper8));
    printf("Res: |%c| \n\n", ft_toupper(str_toupper8));

    return (0);
}