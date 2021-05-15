#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMCPY
    printf("\n");

    puts("#################");
    puts("## ft_memcpy\n");

    // Test0
    char str_memcpy000[100] = "Lorem ipsum dolor sit amet";
    const char str_memcpy010[] = ", consectetur adipiscing elit.";
    char str_memcpy001[100] = "Lorem ipsum dolor sit amet";
    const char str_memcpy011[] = ", consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy000, str_memcpy010);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy000, str_memcpy010, sizeof(str_memcpy000))));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy001, str_memcpy011, sizeof(str_memcpy001))));

    // Test1
    char str_memcpy100[50] = "Lorem ipsum";
    const char str_memcpy110[] = "dolor sit amet, consectetur adipiscing elit.";
    char str_memcpy101[50] = "Lorem ipsum";
    const char str_memcpy111[] = "dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy100, str_memcpy110);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy100, str_memcpy110, 16)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy101, str_memcpy111, 16)));

    // Test2
    char str_memcpy200[12] = "Lorem ipsum";
    const char str_memcpy210[] = "dolor sit amet";
    char str_memcpy201[12] = "Lorem ipsum";
    const char str_memcpy211[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy200, str_memcpy210);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy200, str_memcpy210, sizeof(str_memcpy210))));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy201, str_memcpy211, sizeof(str_memcpy211))));

    // Test3
    char str_memcpy300[12] = "Lorem ipsum";
    const char str_memcpy310[] = "dolor sit amet";
    char str_memcpy301[12] = "Lorem ipsum";
    const char str_memcpy311[] = "dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy300, str_memcpy310);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy300, str_memcpy310, 5)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy301, str_memcpy311, 5)));

    // Test4
    char str_memcpy400[12] = "Lorem ipsum";
    const char str_memcpy410[] = "dolor sit amet";
    char str_memcpy401[12] = "Lorem ipsum";
    const char str_memcpy411[] = "dolor sit amet";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy400, str_memcpy410);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy400, str_memcpy410, 20)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy401, str_memcpy411, 20)));

    // Test5
    char str_memcpy500[12] = "Lorem ipsum";
    const char str_memcpy510[] = "dolor sit amet";
    char str_memcpy501[12] = "Lorem ipsum";
    const char str_memcpy511[] = "dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy500, str_memcpy510);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy500, str_memcpy510, 0)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy501, str_memcpy511, 0)));

    // Test6
    char str_memcpy600[12] = "Lorem";
    const char str_memcpy610[] = " ipsum";
    char str_memcpy601[12] = "Lorem";
    const char str_memcpy611[] = " ipsum";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy600, str_memcpy610);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy600, str_memcpy610, 6)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy601, str_memcpy611, 6)));

    // Test7
    char str_memcpy700[] = "Lorem";
    const char str_memcpy710[] = " ipsum";
    char str_memcpy701[] = "Lorem";
    const char str_memcpy711[] = " ipsum";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy700, str_memcpy710);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy700, str_memcpy710, 11)));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy701, str_memcpy711, 11)));

    // Test8
    char str_memcpy800[15] = "Lorem ipsum";
    const char str_memcpy810[] = " dolor";
    char str_memcpy801[15] = "Lorem ipsum";
    const char str_memcpy811[] = " dolor";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcpy800, str_memcpy810);
    printf("Exp: |%s| \n", ((char *)memcpy(str_memcpy800, str_memcpy810, sizeof(str_memcpy810))));
    printf("Res: |%s| \n\n", ((char *)ft_memcpy(str_memcpy801, str_memcpy811, sizeof(str_memcpy811))));

    return (0);
}