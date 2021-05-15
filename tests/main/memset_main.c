#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMSET
    printf("\n");

    puts("#################");
    puts("## ft_memset\n");

    // Test0
    char str_memset00[] = "Lorem ipsum.";
    char str_memset01[] = "Lorem ipsum.";
    printf("0.Original: |%s| \n", str_memset00);
    memset(str_memset00, '$', 5);
    ft_memset(str_memset01, '$', 5);
    printf("Exp: |%s| \n", str_memset00);
    printf("Res: |%s| \n\n", str_memset01);

    // Test1
    char str_memset10[] = "Lorem ipsum";
    char str_memset11[] = "Lorem ipsum";
    printf("1.Original: |%s| \n", str_memset10);
    memset(str_memset10 + 2, 60, 3);
    ft_memset(str_memset11 + 2, 60, 3);
    printf("Exp: |%s| \n", str_memset10);
    printf("Res: |%s| \n\n", str_memset11);

    // Test2
    char str_memset20[] = "Lorem ipsum dolor";
    char str_memset21[] = "Lorem ipsum dolor";
    printf("2.Original: |%s| \n", str_memset20);
    memset(str_memset20, -42, 6);
    ft_memset(str_memset21, -42, 6);
    printf("Exp: |%s| \n", str_memset20);
    printf("Res: |%s| \n\n", str_memset21);

    // Test3
    char str_memset30[] = "Lorem ipsum";
    char str_memset31[] = "Lorem ipsum";
    printf("3.Original: |%s| \n", str_memset30);
    memset(str_memset30, 48, sizeof(str_memset30) - 1);
    ft_memset(str_memset31, 48, sizeof(str_memset31) - 1);
    printf("Exp: |%s| \n", str_memset30);
    printf("Res: |%s| \n\n", str_memset31);

    // Test4
    char str_memset40[] = "Lorem ipsum";
    char str_memset41[] = "Lorem ipsum";
    printf("4.Original: |%s| \n", str_memset40);
    memset(str_memset40 + 6, 63, 5);
    ft_memset(str_memset41 + 6, 63, 5);
    printf("Exp: |%s| \n", str_memset40);
    printf("Res: |%s| \n\n", str_memset41);

    // Test5
    puts("Note: Overflowing, expected the unexpected.");
    char str_memset50[] = "Lorem ipsum";
    char str_memset51[] = "Lorem ipsum";
    printf("5.Original: |%s| \n", str_memset50);
    memset(str_memset50, '+', 30);
    ft_memset(str_memset51, '+', 30);
    printf("Exp: |%s| \n", str_memset50);
    printf("Res: |%s| \n\n", str_memset51);

    return (0);
}