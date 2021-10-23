#include "libft.h"
#include <stdio.h>
#include <string.h>

int     main()
{
    // #################
    // ## FT_MEMCHR
    printf("\n");

    puts("#################");
    puts("## ft_memchr\n");

    // Test0
    char str_memchr0[11];
    memcpy(str_memchr0, "0123456789", 11);
    printf("0.Original: |%s| \n", str_memchr0);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr0, '0', 5)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr0, '0', 5)));

    // Test1
    char str_memchr1[11];
    memcpy(str_memchr1, "0123456789", 11);
    printf("1.Original: |%s| \n", str_memchr1);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr1, '9', 11)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr1, '9', 11)));

    // Test2
    char str_memchr2[57];
    memcpy(str_memchr2, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 57);
    printf("2.Original: |%s| \n", str_memchr2);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr2, 'i', 10)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr2, 'i', 10)));

    // Test3
    char str_memchr3[14];
    memcpy(str_memchr3, ".Lorem ipsum.", 14);
    printf("3.Original: |%s| \n", str_memchr3);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr3, 46, 14)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr3, 46, 14)));

    // Test4
    char str_memchr4[18];
    memcpy(str_memchr4, "Lorem ipsum dolor", 18);
    printf("4.Original: |%s| \n", str_memchr4);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr4, 'o', 5)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr4, 'o', 5)));

    // Test5
    char str_memchr5[12];
    memcpy(str_memchr5, "Lorem ipsum", 12);
    printf("5.Original: |%s| \n", str_memchr5);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr5, '\0', 15)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr5, '\0', 15)));

    // Test6
    char str_memchr6[12];
    memcpy(str_memchr6, "Lorem ipsum", 12);
    printf("6.Original: |%s| \n", str_memchr6);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr6, 'w', 15)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr6, 'w', 15)));
    
    // Test7
    char str_memchr7[12];
    memcpy(str_memchr7, "Lorem ipsum", 12);
    printf("7.Original: |%s| \n", str_memchr7);
    printf("Exp: |%s| \n", ((char *)memchr(str_memchr7, 'L', 0)));
    printf("Res: |%s| \n\n", ((char *)ft_memchr(str_memchr7, 'L', 0)));

    return (0);
}