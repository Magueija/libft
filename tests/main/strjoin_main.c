#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     main()
{
    // #################
    // ## FT_STRJOIN
    printf("\n");

    puts("#################");
    puts("## ft_strjoin\n");

    // Test0
    char str_strjoin00[] = "Lorem ipsum dolor sit amet, ";
    char str_strjoin01[] = "consectetur adipiscing elit.";
    printf("0.Originais: \n \t> |%s| \n \t> |%s| \n", str_strjoin00, str_strjoin01);
    printf("Exp: |Lorem ipsum dolor sit amet, consectetur adipiscing elit.| \n");
    printf("Res: |%s| \n\n", ft_strjoin(str_strjoin00, str_strjoin01));

    // Test1
    char str_strjoin10[] = "Lorem ipsum";
    char str_strjoin11[] = "dolor sit amet";
    printf("1.Originais: \n \t> |%s| \n \t> |%s| \n", str_strjoin10, str_strjoin11);
    printf("Exp: |Lorem ipsumdolor sit amet| \n");
    printf("Res: |%s| \n\n", ft_strjoin(str_strjoin10, str_strjoin11));

    // Test2
    char str_strjoin20[] = " ";
    char str_strjoin21[] = " \0";
    printf("2.Originais: \n \t> |%s| \n \t> |%s| \n", str_strjoin20, str_strjoin21);
    printf("Exp: |  | \n");
    printf("Res: |%s| \n\n", ft_strjoin(str_strjoin20, str_strjoin21));

    // Test3
    char str_strjoin30[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris urna tellus, aliquam at porta at, mattis quis leo. Vestibulum interdum libero eget urna volutpat, at posuere lorem volutpat. Curabitur lobortis rhoncus placerat. Sed facilisis elementum lectus. Morbi consectetur placerat turpis aliquet imperdiet. Morbi quis ipsum nisl. Phasellus dictum consequat velit, id porttitor magna feugiat vitae. Nam euismod risus finibus lectus rhoncus, id auctor augue molestie. Vestibulum porttitor pulvinar consequat.\n";
    char str_strjoin31[] = "Praesent nec nisi sed augue tempus malesuada. Nam varius porta eros eget fermentum. In hac habitasse platea dictumst. Praesent diam ligula, faucibus ac felis vel, condimentum porta velit. Proin vel odio libero. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Morbi laoreet magna ante, non feugiat nunc molestie eu.\n";
    printf("3.Originais: \n \t> |%s| \n \t> |%s| \n", str_strjoin30, str_strjoin31);
    printf("Exp: |Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris urna tellus, aliquam at porta at, mattis quis leo. Vestibulum interdum libero eget urna volutpat, at posuere lorem volutpat. Curabitur lobortis rhoncus placerat. Sed facilisis elementum lectus. Morbi consectetur placerat turpis aliquet imperdiet. Morbi quis ipsum nisl. Phasellus dictum consequat velit, id porttitor magna feugiat vitae. Nam euismod risus finibus lectus rhoncus, id auctor augue molestie. Vestibulum porttitor pulvinar consequat.\nPraesent nec nisi sed augue tempus malesuada. Nam varius porta eros eget fermentum. In hac habitasse platea dictumst. Praesent diam ligula, faucibus ac felis vel, condimentum porta velit. Proin vel odio libero. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Morbi laoreet magna ante, non feugiat nunc molestie eu.\n| \n");
    printf("Res: |%s| \n\n", ft_strjoin(str_strjoin30, str_strjoin31));

    return (0);
}