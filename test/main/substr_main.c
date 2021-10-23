#include "libft.h"
#include <stdio.h>

int     main()
{
    // #################
    // ## FT_SUBSTR
    printf("\n");

    puts("#################");
    puts("## ft_substr\n");

    // Test0
    char str_substr0[] = "Lorem ipsum.";
    puts("Note: needs to have only one null value.");
    printf("0.Original: |%s| \n", str_substr0);
    printf("Exp: || \n");
    printf("Res: |%s|\n\n", ft_substr(str_substr0, 12, 5));

    // Test1
    char str_substr1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("1.Original: |%s| \n", str_substr1);
    printf("Exp: |Lorem ipsum| \n");
    printf("Res: |%s| \n\n", ft_substr(str_substr1, 0, 11));

    // Test2
    char str_substr2[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("2.Original: |%s| \n", str_substr2);
    printf("Exp: |dolor| \n");
    printf("Res: |%s| \n\n", ft_substr(str_substr2, 12, 5));

    // Test3
    char str_substr3[] = "Lorem ipsum.";
    printf("3.Original: |%s| \n", str_substr3);
    printf("Exp: |(null)| \n");
    printf("Res: |%s| \n\n", ft_substr(str_substr3, 5, 0));

    // Test4
    char str_substr4[] = "Lorem ipsum.";
    printf("4.Original: |%s| \n", str_substr4);
    printf("Exp: |Lorem ipsum.| \n");
    printf("Res: |%s|\n\n", ft_substr(str_substr4, 0, 20));

    return (0);
}