#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    // #################
    // ## FT_ISALPHA
    printf("\n");

    puts("#################");
    puts("## ft_isalpha\n");

    // Test0
    char str_isalpha0 = 'a';
    printf("0.Original: |%c| \n", str_isalpha0);
    printf("Exp: |%i| \n", isalpha(str_isalpha0));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha0));

    // Test1
    int str_isalpha1 = 104;
    printf("1.Original: |%c| \n", str_isalpha1);
    printf("Exp: |%i| \n", isalpha(str_isalpha1));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha1));

    // Test2
    char str_isalpha2 = 'z';
    printf("2.Original: |%c| \n", str_isalpha2);
    printf("Exp: |%i| \n", isalpha(str_isalpha2));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha2));

    // Test3
    char str_isalpha3 = 'A';
    printf("3.Original: |%c| \n", str_isalpha3);
    printf("Exp: |%i| \n", isalpha(str_isalpha3));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha3));

    // Test4
    int str_isalpha4 = 72;
    printf("4.Original: |%c| \n", str_isalpha4);
    printf("Exp: |%i| \n", isalpha(str_isalpha4));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha4));

    // Test5
    char str_isalpha5 = 'Z';
    printf("5.Original: |%c| \n", str_isalpha5);
    printf("Exp: |%i| \n", isalpha(str_isalpha5));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha5));

    // Test6
    char str_isalpha6 = '!';
    printf("6.Original: |%c| \n", str_isalpha6);
    printf("Exp: |%i| \n", isalpha(str_isalpha6));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha6));

    // Test7
    char str_isalpha7 = 94;
    printf("7.Original: |%c| \n", str_isalpha7);
    printf("Exp: |%i| \n", isalpha(str_isalpha7));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha7));

    // Test8
    char str_isalpha8 = 123;
    printf("8.Original: |%c| \n", str_isalpha8);
    printf("Exp: |%i| \n", isalpha(str_isalpha8));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha8));

    // Test9
    char str_isalpha9 = '5';
    printf("9.Original: |%c| \n", str_isalpha9);
    printf("Exp: |%i| \n", isalpha(str_isalpha9));
    printf("Res: |%i| \n\n", ft_isalpha(str_isalpha9));

    return (0);
}