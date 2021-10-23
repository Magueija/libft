#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMCMP
    printf("\n");

    puts("#################");
    puts("## ft_memcmp\n");

    // Test0
    char str_memcmp00[60];
    char str_memcmp01[30];
    memcpy(str_memcmp00, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 57);
    memcpy(str_memcmp01, "Lorem ipsum dolor sit amet", 27);
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp00, str_memcmp01);
    printf("Exp: |%i| \n", memcmp(str_memcmp00, str_memcmp01, 100));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp00, str_memcmp01, 100));

    // Test1
    char str_memcmp10[30];
    char str_memcmp11[60];
    memcpy(str_memcmp10, "Lorem ipsum dolor sit amet", 27);
    memcpy(str_memcmp11, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 57);
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp10, str_memcmp11);
    printf("Exp: |%i| \n", memcmp(str_memcmp10, str_memcmp11, 100));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp10, str_memcmp11, 100));

    // Test2
    char str_memcmp20[28];
    char str_memcmp21[27];
    memcpy(str_memcmp20, "Lorem ipsum dolor sit amet", 27);
    memcpy(str_memcmp21, "Lorem ipsum dolor", 18);
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp20, str_memcmp21);
    printf("Exp: |%i| \n", memcmp(str_memcmp20, str_memcmp21, 10));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp20, str_memcmp21, 10));

    // Test3
    char str_memcmp30[13] = "Lorem ipsum";
    char str_memcmp31[13] = "Lorem ipsum";
    memcpy(str_memcmp30, "Lorem ipsum", 12);
    memcpy(str_memcmp31, "Lorem ipsum", 12);
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp30, str_memcmp31);
    printf("Exp: |%i| \n", memcmp(str_memcmp30, str_memcmp31, 12));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp30, str_memcmp31, 12));

    // Test4
    char str_memcmp40[18];
    char str_memcmp41[11];
    memcpy(str_memcmp40, "Lorem ipsum dolor", 18);
    memcpy(str_memcmp41, "0123456789", 11);
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp40, str_memcmp41);
    printf("Exp: |%i| \n", memcmp(str_memcmp40, str_memcmp41, 0));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp40, str_memcmp41, 0));

    // Test5
    char str_memcmp50[18];
    char str_memcmp51[2];
    memcpy(str_memcmp50, "Lorem ipsum dolor", 18);
    memcpy(str_memcmp51, "", 1);
    printf("5.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp50, str_memcmp51);
    printf("Exp: |%i| \n", memcmp(str_memcmp50, str_memcmp51, 5));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp50, str_memcmp51, 5));

    // Test6
    char str_memcmp60[2];
    char str_memcmp61[6];
    memcpy(str_memcmp60, "", 1);
    memcpy(str_memcmp61, "ipsum", 6);
    printf("6.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp60, str_memcmp61);
    printf("Exp: |%i| \n", memcmp(str_memcmp60, str_memcmp61, 11));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp60, str_memcmp61, 11));

    // Test7
    char str_memcmp70[15];
    char str_memcmp71[15];
    memcpy(str_memcmp70, "abcdef", 6);
    memcpy(str_memcmp71, "ABCDEF", 6);
    printf("7.Originais: \n \t> |%s| \n \t> |%s| \n", str_memcmp70, str_memcmp71);
    printf("Exp: |%i| \n", memcmp(str_memcmp70, str_memcmp71, 5));
    printf("Res: |%i| \n\n", ft_memcmp(str_memcmp70, str_memcmp71, 5));

    return (0);
}