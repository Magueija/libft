#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t  strlcpy(char *dst, const char *src, size_t siz);

int     main()
{
    // #################
    // ## FT_STRLCPY
    printf("\n");

    puts("#################");
    puts("## ft_strlcpy\n");

    // Test0
    char str_strlcpy000[100] = "Lorem ipsum dolor sit amet";
    const char str_strlcpy010[] = ", consectetur adipiscing elit.";
    char str_strlcpy001[100] = "Lorem ipsum dolor sit amet";
    const char str_strlcpy011[] = ", consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy000, str_strlcpy010);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy000, str_strlcpy010, sizeof(str_strlcpy000)), str_strlcpy000);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy001, str_strlcpy011, sizeof(str_strlcpy001)), str_strlcpy001);

    // Test1
    char str_strlcpy100[50] = "Lorem ipsum";
    const char str_strlcpy110[] = "dolor sit amet, consectetur adipiscing elit.";
    char str_strlcpy101[50] = "Lorem ipsum";
    const char str_strlcpy111[] = "dolor sit amet, consectetur adipiscing elit.";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy100, str_strlcpy110);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy100, str_strlcpy110, 16), str_strlcpy100);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy101, str_strlcpy111, 16), str_strlcpy101);

    // Test2
    char str_strlcpy200[12] = "Lorem ipsum";
    const char str_strlcpy210[] = "dolor sit amet";
    char str_strlcpy201[12] = "Lorem ipsum";
    const char str_strlcpy211[] = "dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy200, str_strlcpy210);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy200, str_strlcpy210, sizeof(str_strlcpy200)), str_strlcpy200);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy201, str_strlcpy211, sizeof(str_strlcpy201)), str_strlcpy201);

    // Test3
    char str_strlcpy300[12] = "Lorem ipsum";
    const char str_strlcpy310[] = "dolor sit amet";
    char str_strlcpy301[12] = "Lorem ipsum";
    const char str_strlcpy311[] = "dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy300, str_strlcpy310);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy300, str_strlcpy310, 5), str_strlcpy300);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy301, str_strlcpy311, 5), str_strlcpy301);

    // Test4
    char str_strlcpy400[12] = "Lorem ipsum";
    const char str_strlcpy410[] = "dolor sit amet";
    char str_strlcpy401[12] = "Lorem ipsum";
    const char str_strlcpy411[] = "dolor sit amet";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy400, str_strlcpy410);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy400, str_strlcpy410, 20), str_strlcpy400);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy401, str_strlcpy411, 20), str_strlcpy401);

    // Test5
    char str_strlcpy500[12] = "Lorem ipsum";
    const char str_strlcpy510[] = "dolor sit amet";
    char str_strlcpy501[12] = "Lorem ipsum";
    const char str_strlcpy511[] = "dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy500, str_strlcpy510);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy500, str_strlcpy510, 0), str_strlcpy500);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy501, str_strlcpy511, 0), str_strlcpy501);

    // Test6
    char str_strlcpy600[12] = "Lorem";
    const char str_strlcpy610[] = " ipsum";
    char str_strlcpy601[12] = "Lorem";
    const char str_strlcpy611[] = " ipsum";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy600, str_strlcpy610);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy600, str_strlcpy610, 6), str_strlcpy600);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy601, str_strlcpy611, 6), str_strlcpy601);

    // Test7
    char str_strlcpy700[] = "Lorem";
    const char str_strlcpy710[] = " ipsum";
    char str_strlcpy701[] = "Lorem";
    const char str_strlcpy711[] = " ipsum";
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy700, str_strlcpy710);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy700, str_strlcpy710, 11), str_strlcpy700);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy701, str_strlcpy711, 11), str_strlcpy701);

    // Test8
    char str_strlcpy800[15] = "Lorem ipsum";
    const char str_strlcpy810[] = " dolor";
    char str_strlcpy801[15] = "Lorem ipsum";
    const char str_strlcpy811[] = " dolor";
    printf("8.Originais: \n \t> |%s| \n \t> |%s| \n", str_strlcpy800, str_strlcpy810);
    printf("Exp: %i > |%s| \n", strlcpy(str_strlcpy800, str_strlcpy810, sizeof(str_strlcpy810)), str_strlcpy800);
    printf("Res: %i > |%s| \n\n", ft_strlcpy(str_strlcpy801, str_strlcpy811, sizeof(str_strlcpy811)), str_strlcpy801);

    return (0);
}