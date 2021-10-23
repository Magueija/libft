#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRNCMP
    printf("\n");

    puts("#################");
    puts("## ft_strncmp\n");

    // Test0
    char str_strncmp00[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char str_strncmp01[] = "Lorem ipsum dolor sit amet";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strncmp00, str_strncmp01);
    printf("Exp: |%i| \n", strncmp(str_strncmp00, str_strncmp01, 35));
    printf("Res: |%i| \n\n", ft_strncmp(str_strncmp00, str_strncmp01, 35));

    // Test1
    char str_strncmp10[] = "abcdef";
    char str_strncmp11[] = "abcdefgchijklmnop";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strncmp10, str_strncmp11);
    printf("Exp: |%i| \n", strncmp(str_strncmp10, str_strncmp11, 6));
    printf("Res: |%i| \n\n", ft_strncmp(str_strncmp10, str_strncmp11, 6));

    // Test2
    char str_strncmp20[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char str_strncmp21[] = "Lorem ipsum000";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strncmp20, str_strncmp21);
    printf("Exp: |%i| \n", strncmp(str_strncmp20, str_strncmp21, 11));
    printf("Res: |%i| \n\n", ft_strncmp(str_strncmp20, str_strncmp21, 11));

    // Test3
    char str_strncmp30[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char str_strncmp31[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strncmp30, str_strncmp31);
    printf("Exp: |%i| \n", strncmp(str_strncmp30, str_strncmp31, 100));
    printf("Res: |%i| \n\n", ft_strncmp(str_strncmp30, str_strncmp31, 100));

    // Test4
    char str_strncmp40[] = "0123456789";
    char str_strncmp41[] = "0123456789";
    printf("4.Originais: \n \t> |%s| \n \t> |%s| \n", str_strncmp40, str_strncmp41);
    printf("Exp: |%i| \n", strncmp(str_strncmp40, str_strncmp41, 0));
    printf("Res: |%i| \n\n", ft_strncmp(str_strncmp40, str_strncmp41, 0));

    return (0);
}
