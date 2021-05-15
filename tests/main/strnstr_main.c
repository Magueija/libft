#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *strnstr(const char *haystack, const char *needle, size_t len);

int     main()
{
    // #################
    // ## FT_STRNSTR
    printf("\n");

    puts("#################");
    puts("## ft_strnstr\n");

    // Test0
    const char str_strnstr00[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    const char str_strnstr01[] = "Lorem ipsum dolor sit amet";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr00, str_strnstr01);
    printf("Exp: |%s| \n", strnstr(str_strnstr00, str_strnstr01, 35));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr00, str_strnstr01, 35));

    // Test1
    const char str_strnstr10[] = "Lorem ipsum dolor sit amet";
    const char str_strnstr11[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr10, str_strnstr11);
    printf("Exp: |%s| \n", strnstr(str_strnstr10, str_strnstr11, 23));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr10, str_strnstr11, 23));

    // Test2
    const char str_strnstr20[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    const char str_strnstr21[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr20, str_strnstr21);
    printf("Exp: |%s| \n", strnstr(str_strnstr20, str_strnstr21, 27));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr20, str_strnstr21, 27));

    // Test3
    const char str_strnstr30[] = "Lorem ipsum dolor Lorem ipsum dolor";
    const char str_strnstr31[] = "Lorem ipsum dolor";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr30, str_strnstr31);
    printf("Exp: |%s| \n", strnstr(str_strnstr30, str_strnstr31, 7));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr30, str_strnstr31, 7));

    // Test4
    const char str_strnstr40[] = "Lorem ipsum dolor";
    const char str_strnstr41[] = "Lorem ipsum dolor";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr40, str_strnstr41);
    printf("Exp: |%s| \n", strnstr(str_strnstr40, str_strnstr41, 5));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr40, str_strnstr41, 5));

    // Test5
    const char str_strnstr50[] = "Lorem ipsum dolor";
    const char str_strnstr51[] = "";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr50, str_strnstr51);
    printf("Exp: |%s| \n", strnstr(str_strnstr50, str_strnstr51, 5));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr50, str_strnstr51, 5));

    // Test6
    const char str_strnstr60[] = "Lorem ipsum dolor";
    const char str_strnstr61[] = "ipsum";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr60, str_strnstr61);
    printf("Exp: |%s| \n", strnstr(str_strnstr60, str_strnstr61, 11));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr60, str_strnstr61, 11));

    // Test7
    const char str_strnstr70[] = "";
    const char str_strnstr71[] = "Lorem ipsum";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr70, str_strnstr71);
    printf("Exp: |%s| \n", strnstr(str_strnstr70, str_strnstr71, 11));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr70, str_strnstr71, 11));

    // Test8
    const char str_strnstr80[] = "Lorem ipsum dolor";
    const char str_strnstr81[] = "Lorem ipsum";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_strnstr80, str_strnstr81);
    printf("Exp: |%s| \n", strnstr(str_strnstr80, str_strnstr81, 0));
    printf("Res: |%s| \n\n", ft_strnstr(str_strnstr80, str_strnstr81, 0));

    return (0);
}