#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_STRLEN
    printf("\n");

    puts("#################");
    puts("## ft_strlen\n");

    // Test1
    char str_strlen1[] = "Lorem ipsum.";
    printf("Original: |%s| \n", str_strlen1);
    printf("Exp: |%d| \n", strlen(str_strlen1));
    printf("Res: |%d| \n\n", ft_strlen(str_strlen1));

    // Test2
    char str_strlen2[] = "/Hbus78uwbuq90324º#-23!+32432+l5";
    printf("Original: |%s| \n", str_strlen2);
    printf("Exp: |%d| \n", strlen(str_strlen2));
    printf("Res: |%d| \n\n", ft_strlen(str_strlen2));

    // Test3
    char str_strlen3[] = "\0";
    printf("Original: |%s| \n", str_strlen3);
    printf("Exp: |%d| \n", strlen(str_strlen3));
    printf("Res: |%d| \n\n", ft_strlen(str_strlen3));

    return (0);
}
   