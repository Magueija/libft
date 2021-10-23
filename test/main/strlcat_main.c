#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t  strlcat(char *dst, const char *src, size_t siz);

int     main()
{
    // #################
    // ## FT_STRLCAT
    printf("\n");

    puts("#################");
    puts("## ft_strlcat\n");

    // Test0
    char str_strlcat000[100] = "Lorem ipsum dolor sit amet";
    const char str_strlcat010[] = ", consectetur adipiscing elit.";
    char str_strlcat001[100] = "Lorem ipsum dolor sit amet";
    const char str_strlcat011[] = ", consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat000, str_strlcat010);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat000, str_strlcat010, sizeof(str_strlcat000)), str_strlcat000);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat001, str_strlcat011, sizeof(str_strlcat001)), str_strlcat001);

    // Test1
    char str_strlcat100[50] = "Lorem ipsum";
    const char str_strlcat110[] = "dolor sit amet, consectetur adipiscing elit.";
    char str_strlcat101[50] = "Lorem ipsum";
    const char str_strlcat111[] = "dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat100, str_strlcat110);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat100, str_strlcat110, 16), str_strlcat100);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat101, str_strlcat111, 16), str_strlcat101);

    // Test2
    char str_strlcat200[12] = "Lorem ipsum";
    const char str_strlcat210[] = "dolor sit amet";
    char str_strlcat201[12] = "Lorem ipsum";
    const char str_strlcat211[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat200, str_strlcat210);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat200, str_strlcat210, sizeof(str_strlcat200)), str_strlcat200);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat201, str_strlcat211, sizeof(str_strlcat201)), str_strlcat201);

    // Test3
    char str_strlcat300[12] = "Lorem ipsum";
    const char str_strlcat310[] = "dolor sit amet";
    char str_strlcat301[12] = "Lorem ipsum";
    const char str_strlcat311[] = "dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat300, str_strlcat310);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat300, str_strlcat310, 5), str_strlcat300);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat301, str_strlcat311, 5), str_strlcat301);

    // Test4
    char str_strlcat400[12] = "Lorem ipsum";
    const char str_strlcat410[] = "dolor sit amet";
    char str_strlcat401[12] = "Lorem ipsum";
    const char str_strlcat411[] = "dolor sit amet";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat400, str_strlcat410);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat400, str_strlcat410, 20), str_strlcat400);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat401, str_strlcat411, 20), str_strlcat401);

    // Test5
    char str_strlcat500[12] = "Lorem ipsum";
    const char str_strlcat510[] = "dolor sit amet";
    char str_strlcat501[12] = "Lorem ipsum";
    const char str_strlcat511[] = "dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat500, str_strlcat510);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat500, str_strlcat510, 0), str_strlcat500);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat501, str_strlcat511, 0), str_strlcat501);

    // Test6
    char str_strlcat600[12] = "Lorem";
    const char str_strlcat610[] = " ipsum";
    char str_strlcat601[12] = "Lorem";
    const char str_strlcat611[] = " ipsum";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat600, str_strlcat610);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat600, str_strlcat610, 6), str_strlcat600);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat601, str_strlcat611, 6), str_strlcat601);

    // Test7
    char str_strlcat700[] = "Lorem";
    const char str_strlcat710[] = " ipsum";
    char str_strlcat701[] = "Lorem";
    const char str_strlcat711[] = " ipsum";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat700, str_strlcat710);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat700, str_strlcat710, 11), str_strlcat700);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat701, str_strlcat711, 11), str_strlcat701);

    // Test8
    char str_strlcat800[15] = "Lorem ipsum";
    const char str_strlcat810[] = " dolor";
    char str_strlcat801[15] = "Lorem ipsum";
    const char str_strlcat811[] = " dolor";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcat800, str_strlcat810);
    printf("Exp: %i > |%s| \n", strlcat(str_strlcat800, str_strlcat810, sizeof(str_strlcat810)), str_strlcat800);
    printf("Res: %i > |%s| \n\n", ft_strlcat(str_strlcat801, str_strlcat811, sizeof(str_strlcat811)), str_strlcat801);

    return (0);
}