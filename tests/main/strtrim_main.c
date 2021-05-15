#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_STRTRIM
    printf("\n");

    puts("#################");
    puts("## ft_strtrim\n");

    // Test0
    char str_strtrim00[] = "##Lorem ipsum dolor sit amet";
    char str_strtrim01[] = "##";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim00, str_strtrim01);
    printf("Exp: |Lorem ipsum dolor sit amet| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim00, str_strtrim01));

    // Test1
    char str_strtrim10[] = "&&&&Lorem ipsum && dolor sit amet&&&&&";
    char str_strtrim11[] = "&&";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim10, str_strtrim11);
    printf("Exp: |Lorem ipsum && dolor sit amet&| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim10, str_strtrim11));

    // Test2
    char str_strtrim20[] = "       Lorem ipsum dolor sit amet  ";
    char str_strtrim21[] = " ";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim20, str_strtrim21);
    printf("Exp: |Lorem ipsum dolor sit amet| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim20, str_strtrim21));

    // Test3
    char str_strtrim30[] = "Lorem ipsum dolor sit amet";
    char str_strtrim31[] = "9";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim30, str_strtrim31);
    printf("Exp: |Lorem ipsum dolor sit amet| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim30, str_strtrim31));

    // Test4
    char str_strtrim40[] = "$$$$$$$$$";
    char str_strtrim41[] = "$$";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim40, str_strtrim41);
    printf("Exp: |$| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim40, str_strtrim41));

    // Test5
    char str_strtrim50[] = "Lorem";
    char str_strtrim51[] = "Lorem";
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim50, str_strtrim51);
    printf("Exp: || \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim50, str_strtrim51));

    // Test6
    char str_strtrim60[] = "Lor";
    char str_strtrim61[] = "Loremm";
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_strtrim60, str_strtrim61);
    printf("Exp: |Lor| \n");
    printf("Res: |%s| \n\n", ft_strtrim(str_strtrim60, str_strtrim61));

    return (0);
}