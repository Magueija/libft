#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMMOVE
    printf("\n");

    puts("#################");
    puts("## ft_memmove\n");

    // Test0
    char str_memmove000[100] = "Lorem ipsum dolor sit amet";
    const char str_memmove010[] = ", consectetur adipiscing elit.";
    char str_memmove001[100] = "Lorem ipsum dolor sit amet";
    const char str_memmove011[] = ", consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove000, str_memmove010);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove000, str_memmove010, sizeof(str_memmove000))));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove001, str_memmove011, sizeof(str_memmove001))));

    // Test1
    char str_memmove100[50] = "Lorem ipsum";
    const char str_memmove110[] = "dolor sit amet, consectetur adipiscing elit.";
    char str_memmove101[50] = "Lorem ipsum";
    const char str_memmove111[] = "dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove100, str_memmove110);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove100, str_memmove110, 16)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove101, str_memmove111, 16)));

    // Test2
    char str_memmove200[12] = "Lorem ipsum";
    const char str_memmove210[] = "dolor sit amet";
    char str_memmove201[12] = "Lorem ipsum";
    const char str_memmove211[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove200, str_memmove210);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove200, str_memmove210, sizeof(str_memmove210))));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove201, str_memmove211, sizeof(str_memmove211))));

    // Test3
    char str_memmove300[12] = "Lorem ipsum";
    const char str_memmove310[] = "dolor sit amet";
    char str_memmove301[12] = "Lorem ipsum";
    const char str_memmove311[] = "dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove300, str_memmove310);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove300, str_memmove310, 5)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove301, str_memmove311, 5)));

    // Test4
    const char str_memmove410[] = "dolor sit amet";
    char str_memmove400[12] = "Lorem ipsum";
    const char str_memmove411[] = "dolor sit amet";
    char str_memmove401[12] = "Lorem ipsum";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove400, str_memmove410);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove400, str_memmove410, 20)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove401, str_memmove411, 20)));

    // Test5
    char str_memmove500[12] = "Lorem ipsum";
    const char str_memmove510[] = "dolor sit amet";
    char str_memmove501[12] = "Lorem ipsum";
    const char str_memmove511[] = "dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove500, str_memmove510);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove500, str_memmove510, 0)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove501, str_memmove511, 0)));

    // Test6
    const char str_memmove610[] = " ipsum";
    char str_memmove600[12] = "Lorem";
    const char str_memmove611[] = " ipsum";
    char str_memmove601[12] = "Lorem";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove600, str_memmove610);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove600, str_memmove610, 6)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove601, str_memmove611, 6)));

    // Test7
    const char str_memmove710[] = " ipsum";
    char str_memmove700[] = "Lorem";
    const char str_memmove711[] = " ipsum";
    char str_memmove701[] = "Lorem";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove700, str_memmove710);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove700, str_memmove710, 11)));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove701, str_memmove711, 11)));

    // Test8
    char str_memmove800[15] = "Lorem ipsum";
    const char str_memmove810[] = " dolor";
    char str_memmove801[15] = "Lorem ipsum";
    const char str_memmove811[] = " dolor";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_memmove800, str_memmove810);
    printf("Exp: |%s| \n", ((char *)memmove(str_memmove800, str_memmove810, sizeof(str_memmove810))));
    printf("Res: |%s| \n\n", ((char *)ft_memmove(str_memmove801, str_memmove811, sizeof(str_memmove811))));

    return (0);
}