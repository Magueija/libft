#include "libft.h"
#include <stdio.h>

char    ft_test(unsigned int i, char c)
{
    return (c + i);
}

int     main()
{
    // #################
    // ## FT_STRMAPI
    printf("\n");

    puts("#################");
    puts("## ft_strmapi\n");

    // Test0
    char str_strmapi0[] = "ABCDEFGHIJKLM";  
    printf("0.Original: |%s| \n", str_strmapi0);
    printf("Exp: |%s| > |ACEGIKMOQSUWY| \n", str_strmapi0);
    printf("Res: |%s| > |%s| \n\n", str_strmapi0, ft_strmapi(str_strmapi0, &ft_test));

    // Test1
    char str_strmapi1[] = "abcdefghijklm";
    printf("1.Originais: |%s| \n", str_strmapi1);
    printf("Exp: |%s| > |acegikmoqsuwy| \n", str_strmapi1);
    printf("Res: |%s| > |%s| \n\n", str_strmapi1, ft_strmapi(str_strmapi1, &ft_test));

    // Test2
    char str_strmapi2[] = "01234";
    printf("2.Originais: |%s| \n", str_strmapi2);
    printf("Exp: |%s| > |02468| \n", str_strmapi2);
    printf("Res: |%s| > |%s| \n\n", str_strmapi2, ft_strmapi(str_strmapi2, &ft_test));

    // Test3
    char str_strmapi3[] = "     ";
    printf("3.Originais: |%s| \n", str_strmapi3);
    printf("Exp: |%s| > | !\"#$| \n", str_strmapi3);
    printf("Res: |%s| > |%s| \n\n", str_strmapi3, ft_strmapi(str_strmapi3, &ft_test));

    // Test4
    char str_strmapi4[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";  
    printf("4.Original: |%s| \n", str_strmapi4);
    printf("Exp: |%s| > |ABCDEFGHIJKLMNOPQRSTUVWXYZ| \n", str_strmapi4);
    printf("Res: |%s| > |%s| \n\n", str_strmapi4, ft_strmapi(str_strmapi4, &ft_test));

    return (0);
}