#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRCHR
    printf("\n");

    puts("#################");
    puts("## ft_strchr\n");

    // Test0
    char str_strchr0[] = "0123456789";
    printf("0.Original: |%s| \n", str_strchr0);
    printf("Exp: |%s| \n", strchr(str_strchr0, '0'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr0, '0'));

    // Test1
    char str_strchr1[] = "0123456789";
    printf("1.Original: |%s| \n", str_strchr1);
    printf("Exp: |%s| \n", strchr(str_strchr1, '9'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr1, '9'));

    // Test2
    char str_strchr2[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("2.Original: |%s| \n", str_strchr2);
    printf("Exp: |%s| \n", strchr(str_strchr2, 'i'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr2, 'i'));

    // Test3
    char str_strchr3[] = ".Lorem ipsum.";
    printf("3.Original: |%s| \n", str_strchr3);
    printf("Exp: |%s| \n", strchr(str_strchr3, 46));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr3, 46));

    // Test4
    char str_strchr4[] = "Lorem ipsum dolor";
    printf("4.Original: |%s| \n", str_strchr4);
    printf("Exp: |%s| \n", strchr(str_strchr4, 'o'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr4, 'o'));

    // Test5
    char str_strchr5[] = "Lorem ipsum";
    printf("5.Original: |%s| \n", str_strchr5);
    printf("Exp: |%s| \n", strchr(str_strchr5, '\0'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr5, '\0'));

    // Test6
    char str_strchr6[] = "Lorem ipsum";
    printf("6.Original: |%s| \n", str_strchr6);
    printf("Exp: |%s| \n", strchr(str_strchr6, 'w'));
    printf("Res: |%s| \n\n", ft_strchr(str_strchr6, 'w'));

    return (0);
}