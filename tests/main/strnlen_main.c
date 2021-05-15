#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRNLEN
    printf("\n");

    puts("#################");
    puts("## ft_strnlen\n");

    // Test0
    char str_strnlen0[] = "Lorem ipsum";
    printf("0.Original: |%s| \n", str_strnlen0);
    printf("Exp: |%d| \n", strnlen(str_strnlen0, 0));
    printf("Res: |%d| \n\n", ft_strnlen(str_strnlen0, 0));

    // Test1
    char str_strnlen1[] = "Lorem ipsum.";
    printf("1.Original: |%s| \n", str_strnlen1);
    printf("Exp: |%d| \n", strnlen(str_strnlen1, 10));
    printf("Res: |%d| \n\n", ft_strnlen(str_strnlen1, 10));

    // Test2
    char str_strnlen2[] = "/Hbus78uwbuq90324º#-23!+32432+l5";
    printf("2.Original: |%s| \n", str_strnlen2);
    printf("Exp: |%d| \n", strnlen(str_strnlen2, 50));
    printf("Res: |%d| \n\n", ft_strnlen(str_strnlen2, 50));

    // Test3
    char str_strnlen3[] = "\0";
    printf("3.Original: |%s| \n", str_strnlen3);
    printf("Exp: |%d| \n", strnlen(str_strnlen3, 5));
    printf("Res: |%d| \n\n", ft_strnlen(str_strnlen3, 5));

    return (0);
}