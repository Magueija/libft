#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_SPLIT
    printf("\n");

    puts("#################");
    puts("## ft_split\n");

    // Test0
    char str_split00[] = "Lorem ipsum Lorem ipsum dolor Lorem ipsum";
    printf("0.Originais: \n \t> |%s| \n \t> |%c| \n", str_split00, 'L');
    printf("Exp: \n \t> |orem ipsum | \n \t> |orem ipsum dolor | \n \t> |orem ipsum| \n");
    printf("Res: \n");
    char** mtz_split0 = ft_split(str_split00, 'L');
    while (*mtz_split0)
        printf("\t> |%s|\n", *mtz_split0++);
    printf("\n");

    // Test1
    char str_split10[] = "Lorem ipsum dolor sit amet";
    printf("1.Originais: \n \t> |%s| \n \t> |%c| \n", str_split10, 'm');
    printf("Exp: \n \t> |Lore| \n \t> | ipsu| \n \t> | dolor sit a| \n \t> |et| \n");
    printf("Res: \n");
    char** mtz_split1 = ft_split(str_split10, 'm');
    while (*mtz_split1)
        printf("\t> |%s|\n", *mtz_split1++);
    printf("\n");

    // Test2
    char str_split20[] = "Lorem ipsum dolor sit amet";
    printf("2.Originais: \n \t> |%s| \n \t> |%c| \n", str_split20, '\0');
    printf("Exp: \n \t> |Lorem ipsum dolor sit amet| \n");
    printf("Res: \n");
    char** mtz_split2 = ft_split(str_split20, '\0');
    while (*mtz_split2)
        printf("\t> |%s|\n", *mtz_split2++);
    printf("\n");

    // Test3
    char str_split30[] = "Lorem ipsum dolor sit amet";
    printf("3.Originais: \n \t> |%s| \n \t> |%c| \n", str_split30, '9');
    printf("Exp: \n \t> |Lorem ipsum dolor sit amet| \n");
    printf("Res: \n");
    char** mtz_split3 = ft_split(str_split30, '9');
    while (*mtz_split3)
        printf("\t> |%s|\n", *mtz_split3++);
    printf("\n");

    // Test4
    char str_split40[] = "  Lorem ipsum  dolor sit   amet        ";
    printf("4.Originais: \n \t> |%s| \n \t> |%c| \n", str_split40, ' ');
    printf("Exp: \n \t> |Lorem| \n \t> |ipsum| \n \t> |dolor| \n \t> |sit| \n \t> |amet| \n");
    printf("Res: \n");
    char** mtz_split4 = ft_split(str_split40, ' ');
    while (*mtz_split4)
        printf("\t> |%s|\n", *mtz_split4++);
    printf("\n");

    // Test5
    char str_split50[] = "Lorem ipsum dolor sit amet";
    printf("5.Originais: \n \t> |%s| \n \t> |%c| \n", str_split50, 'o');
    printf("Exp: \n \t> |L| \n \t> |rem ipsum d| \n \t> |l| \n \t> |r sit amet| \n");
    printf("Res: \n");
    char** mtz_split5 = ft_split(str_split50, 'o');
    while (*mtz_split5)
        printf("\t> |%s|\n", *mtz_split5++);
    printf("\n");

    return (0);
}