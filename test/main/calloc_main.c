#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_CALLOC
    printf("\n");

    puts("#################");
    puts("## ft_calloc\n");

    puts("\nCalloc must be initialized with 0. (to be checked)\n\n");

    // Test0
    char *str_calloc00 = ((char *)calloc(10, sizeof(char)));
    char *str_calloc01 = ((char *)ft_calloc(10, sizeof(char)));
    for (int i = 0; i < 9; ++i) {
        *(str_calloc00 + i) = i + '0';
        *(str_calloc01 + i) = i + '0';
    }
    puts("0.");
    printf("Exp: |%s| \n", str_calloc00);
    printf("Res: |%s| \n\n", str_calloc01);

    // Test1
    int *str_calloc10 = ((int *)calloc(10, sizeof(int)));
    int *str_calloc11 = ((int *)ft_calloc(10, sizeof(int)));
    puts("1.");
    printf("Exp: ");
    for (int i = 0; i < 10; ++i) {
        str_calloc10[i] = i;
        printf("|%i| ", str_calloc10[i]);
    }
    printf("\n");
    printf("Res: ");
    for (int i = 0; i < 10; ++i) {
        str_calloc11[i] = i;
        printf("|%i| ", str_calloc11[i]);
    }
    printf("\n\n");

    // Test2
    char *str_calloc20 = ((char *)calloc(0, sizeof(char)));
    char *str_calloc21 = ((char *)ft_calloc(0, sizeof(char)));
    puts("2.");
    free(str_calloc20);
    free(str_calloc21);
    printf("Res: freed successfully! \n");
    //printf("Exp: |%s| \n", str_calloc20);
    //printf("Res: |%s| \n\n", str_calloc21);

    // Test3
    char *str_calloc30 = ((char *)calloc(5, 0));
    char *str_calloc31 = ((char *)ft_calloc(5, 0));
    puts("3.");
    free(str_calloc30);
    free(str_calloc31);
    printf("Res: freed successfully! \n");
    //printf("Exp: |%s| \n", str_calloc30);
    //printf("Res: |%s| \n\n", str_calloc31);

    // Test4
    char *str_calloc40 = ((char *)calloc(0, 0));
    char *str_calloc41 = ((char *)ft_calloc(0, 0));
    puts("4.");
    free(str_calloc40);
    free(str_calloc41);
    printf("Res: freed successfully! \n");
    //printf("Exp: |%s| \n", str_calloc40);
    //printf("Res: |%s| \n\n", str_calloc41);

    return (0);
}