#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *memrchr(const void *s, int c, size_t n);

int     main()
{
    // #################
    // ## FT_MEMRCHR
    printf("\n");

    puts("#################");
    puts("## ft_memrchr\n");

    // Test0
    char str_memrchr0[11];
    memcpy(str_memrchr0, "0123456789", 11);
    printf("0.Original: |%s| \n", str_memrchr0);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr0, '0', 1)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr0, '0', 1)));

    // Test1
    char str_memrchr1[11];
    memcpy(str_memrchr1, "0123456789", 11);
    printf("1.Original: |%s| \n", str_memrchr1);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr1, '9', 11)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr1, '9', 11)));

    // Test2
    char str_memrchr2[57];
    memcpy(str_memrchr2, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 57);
    printf("2.Original: |%s| \n", str_memrchr2);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr2, 'i', 60)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr2, 'i', 60)));

    // Test3
    char str_memrchr3[11];
    memcpy(str_memrchr3, ".Lorem ipsum.", 11);
    printf("3.Original: |%s| \n", str_memrchr3);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr3, 'm', 0)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr3, 'm', 0)));

    // Test4
    char str_memrchr4[18];
    memcpy(str_memrchr4, "Lorem ipsum dolor", 18);
    printf("4.Original: |%s| \n", str_memrchr4);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr4, 'o', 3)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr4, 'o', 3)));

    // Test5
    char str_memrchr5[12];
    memcpy(str_memrchr5, "Lorem ipsum", 12);
    printf("5.Original: |%s| \n", str_memrchr5);
    printf("Exp: |%s| \n", ((char*)memrchr(str_memrchr5, '\0', 10)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr(str_memrchr5, '\0', 10)));

    // Test6
    char str_memrchr6[12];
    memcpy(str_memrchr6, "Lorem ipsum", 12);
    printf("6.Original: |%s| \n", str_memrchr6);
    printf("Exp: |%s| \n", ((char*)memrchr((const void*)str_memrchr6, 'w', 15)));
    printf("Res: |%s| \n\n", ((char*)ft_memrchr((const void*)str_memrchr6, 'w', 15)));

    return (0);
}