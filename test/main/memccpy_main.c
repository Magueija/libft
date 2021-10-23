#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMCCPY
    printf("\n");

    puts("#################");
    puts("## ft_memccpy\n");

    // Test0
    char str_memccpy000[100] = "Lorem ipsum dolor sit amet";
    const char str_memccpy010[] = ", consectetur adipiscing elit.";
    char str_memccpy001[100] = "Lorem ipsum dolor sit amet";
    const char str_memccpy011[] = ", consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy000, str_memccpy010);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy000, str_memccpy010, 'i', sizeof(str_memccpy000))), str_memccpy000);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy001, str_memccpy011, 'i', sizeof(str_memccpy001))), str_memccpy001);

    // Test1
    char str_memccpy100[50] = "Lorem ipsum";
    const char str_memccpy110[] = "dolor sit amet, consectetur adipiscing elit.";
    char str_memccpy101[50] = "Lorem ipsum";
    const char str_memccpy111[] = "dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy100, str_memccpy110);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy100, str_memccpy110, ' ', 16)), str_memccpy100);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy101, str_memccpy111, ' ', 16)), str_memccpy101);

    // Test2
    char str_memccpy200[12] = "Lorem ipsum";
    const char str_memccpy210[] = "dolor sit amet";
    char str_memccpy201[12] = "Lorem ipsum";
    const char str_memccpy211[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy200, str_memccpy210);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy200, str_memccpy210, 'w', sizeof(str_memccpy210))), str_memccpy200);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy201, str_memccpy211, 'w', sizeof(str_memccpy211))), str_memccpy201);

    // Test3
    char str_memccpy300[12] = "Lorem ipsum";
    const char str_memccpy310[] = "dolor sit amet";
    char str_memccpy301[12] = "Lorem ipsum";
    const char str_memccpy311[] = "dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy300, str_memccpy310);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy300, str_memccpy310, 'd', 5)), str_memccpy300);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy301, str_memccpy311, 'd', 5)), str_memccpy301);

    // Test4
    char str_memccpy400[12] = "Lorem ipsum";
    const char str_memccpy410[] = "dolor sit amet";
    char str_memccpy401[12] = "Lorem ipsum";
    const char str_memccpy411[] = "dolor sit amet";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy400, str_memccpy410);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy400, str_memccpy410, 't', 20)), str_memccpy400);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy401, str_memccpy411, 't', 20)), str_memccpy401);

    // Test5
    char str_memccpy500[12] = "Lorem ipsum";
    const char str_memccpy510[] = "dolor sit amet";
    char str_memccpy501[12] = "Lorem ipsum";
    const char str_memccpy511[] = "dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy500, str_memccpy510);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy500, str_memccpy510, '\0', 0)), str_memccpy500);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy501, str_memccpy511, '\0', 0)), str_memccpy501);

    // Test6
    char str_memccpy600[12] = "Lorem";
    const char str_memccpy610[] = " ipsum";
    char str_memccpy601[12] = "Lorem";
    const char str_memccpy611[] = " ipsum";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy600, str_memccpy610);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy600, str_memccpy610, 'L', 6)), str_memccpy600);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy601, str_memccpy611, 'L', 6)), str_memccpy601);

    // Test7
    char str_memccpy700[] = "Lorem";
    const char str_memccpy710[] = " ipsum";
    char str_memccpy701[] = "Lorem";
    const char str_memccpy711[] = " ipsum";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy700, str_memccpy710);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy700, str_memccpy710, '.', 11)), str_memccpy700);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy701, str_memccpy711, '.', 11)), str_memccpy701);

    // Test8
    char str_memccpy800[15] = "Lorem ipsum";
    const char str_memccpy810[] = " dolor";
    char str_memccpy801[15] = "Lorem ipsum";
    const char str_memccpy811[] = " dolor";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_memccpy800, str_memccpy810);
    printf("Exp: |%s| > |%s| \n", ((char *)memccpy(str_memccpy800, str_memccpy810, '\0', sizeof(str_memccpy810))), str_memccpy800);
    printf("Res: |%s| > |%s| \n\n", ((char *)ft_memccpy(str_memccpy801, str_memccpy811, '\0', sizeof(str_memccpy811))), str_memccpy801);

    return (0);
}