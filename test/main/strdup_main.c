#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRDUP
    printf("\n");

    puts("#################");
    puts("## ft_strdup\n");

    // Test0
    char str_strdup0[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    printf("Original: |%s| \n", str_strdup0);
    printf("Exp: |%s| \n", strdup(str_strdup0));
    printf("Res: |%s| \n\n", ft_strdup(str_strdup0));

    // Test1
    char str_strdup1[] = "Lorem ipsum.   ";
    printf("Original: |%s| \n", str_strdup1);
    printf("Exp: |%s| \n", strdup(str_strdup1));
    printf("Res: |%s| \n\n", ft_strdup(str_strdup1));

    // Test2
    char str_strdup2[] = "\n0123456789\t!#$&/()=?'*+ºª´^`~-_.:,;\\ /";
    printf("Original: |%s| \n", str_strdup2);
    printf("Exp: |%s| \n", strdup(str_strdup2));
    printf("Res: |%s| \n\n", ft_strdup(str_strdup2));

    // Test3
    char str_strdup3[] = " Lorem ipsum.\0";
    printf("Original: |%s| \n", str_strdup3);
    printf("Exp: |%s| \n", strdup(str_strdup3));
    printf("Res: |%s| \n\n", ft_strdup(str_strdup3));
    
    return (0);
}