#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_BZERO
    printf("\n");

    puts("#################");
    puts("## ft_bzero\n");

    // Test0
    char str_bzero00[] = "Lorem ipsum.";
    char str_bzero01[] = "Lorem ipsum.";
    printf("0.Original: |%s| \n", str_bzero00);
    memset(str_bzero00, 0, 5);
    ft_bzero(str_bzero01, 5);
    printf("Exp: |%s| \n", str_bzero00);
    printf("Res: |%s| \n\n", str_bzero01);

    // Test1
    char str_bzero10[] = "Lorem ipsum";
    char str_bzero11[] = "Lorem ipsum";
    printf("1.Original: |%s| \n", str_bzero10);
    memset(str_bzero10 + 2, 0, 3);
    ft_bzero(str_bzero11 + 2, 3);
    printf("Exp: |%s| \n", str_bzero10);
    printf("Res: |%s| \n\n", str_bzero11);

    // Test2
    char str_bzero20[] = "Lorem ipsum dolor";
    char str_bzero21[] = "Lorem ipsum dolor";
    printf("2.Original: |%s| \n", str_bzero20);
    memset(str_bzero20 + 5, 0, 6);
    ft_bzero(str_bzero21 + 5, 6);
    printf("Exp: |%s| \n", str_bzero20);
    printf("Res: |%s| \n\n", str_bzero21);

    // Test3
    char str_bzero30[] = "Lorem ipsum";
    char str_bzero31[] = "Lorem ipsum";
    printf("3.Original: |%s| \n", str_bzero30);
    memset(str_bzero30, 0, sizeof(str_bzero30) - 1);
    ft_bzero(str_bzero31, sizeof(str_bzero31) - 1);
    printf("Exp: |%s| \n", str_bzero30);
    printf("Res: |%s| \n\n", str_bzero31);

    // Test4
    char str_bzero40[] = "Lorem ipsum";
    char str_bzero41[] = "Lorem ipsum";
    printf("4.Original: |%s| \n", str_bzero40);
    memset(str_bzero40 + 6, 0, 5);
    ft_bzero(str_bzero41 + 6, 5);
    printf("Exp: |%s| \n", str_bzero40);
    printf("Res: |%s| \n\n", str_bzero41);

    // Test5
    puts("Note: Overflowing, expected the unexpected.");
    char str_bzero50[] = "Lorem ipsum";
    char str_bzero51[] = "Lorem ipsum";
    printf("5.Original: |%s| \n", str_bzero50);
    memset(str_bzero50, 0, 30);
    ft_bzero(str_bzero51, 30);
    printf("Exp: |%s| \n", str_bzero50);
    printf("Res: |%s| \n\n", str_bzero51);

    return (0);
}