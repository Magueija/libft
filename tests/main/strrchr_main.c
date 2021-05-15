#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRRCHR
    printf("\n");

    puts("#################");
    puts("## ft_strrchr\n");

    // Test0
    char str_strrchr0[] = "0123456789";
    printf("0.Original: |%s| \n", str_strrchr0);
    printf("Exp: |%s| \n", strrchr(str_strrchr0, '0'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr0, '0'));

    // Test1
    char str_strrchr1[] = "0123456789";
    printf("1.Original: |%s| \n", str_strrchr1);
    printf("Exp: |%s| \n", strrchr(str_strrchr1, '9'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr1, '9'));

    // Test2
    char str_strrchr2[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("2.Original: |%s| \n", str_strrchr2);
    printf("Exp: |%s| \n", strrchr(str_strrchr2, 'i'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr2, 'i'));

    // Test3
    char str_strrchr3[] = ".Lorem ipsum.";
    printf("3.Original: |%s| \n", str_strrchr3);
    printf("Exp: |%s| \n", strrchr(str_strrchr3, 46));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr3, 46));

    // Test4
    char str_strrchr4[] = "Lorem ipsum dolor";
    printf("4.Original: |%s| \n", str_strrchr4);
    printf("Exp: |%s| \n", strrchr(str_strrchr4, 'o'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr4, 'o'));

    // Test5
    char str_strrchr5[] = "Lorem ipsum";
    printf("5.Original: |%s| \n", str_strrchr5);
    printf("Exp: |%s| \n", strrchr(str_strrchr5, '\0'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr5, '\0'));

    // Test6
    char str_strrchr6[] = "Lorem ipsum";
    printf("6.Original: |%s| \n", str_strrchr6);
    printf("Exp: |%s| \n", strrchr(str_strrchr6, 'w'));
    printf("Res: |%s| \n\n", ft_strrchr(str_strrchr6, 'w'));

    return (0);
}