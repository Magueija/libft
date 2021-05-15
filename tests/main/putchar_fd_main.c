#include "libft.h"

int     main()
{
    // #################
    // ## FT_PUTCHAR_FD
    write(1, "\n", 1);

    write(1, "#################\n", 18);
    write(1, "## ft_putchar_fd\n", 17);

    // Test0
    char str_putchar_fd0 = '0';
    write(1, "\n0.Original: |0| \n", 18);
    write(1, "Exp: ", 5);
    write(1, &str_putchar_fd0, 1);
    write(1, "\nRes: ", 6);
    ft_putchar_fd(str_putchar_fd0, 1);

    // Test1
    char str_putchar_fd1 = ' ';
    write(1, "\n\n1.Original: | | \n", 19);
    write(1, "Exp: ", 5);
    write(1, &str_putchar_fd1, 1);
    write(1, "\nRes: ", 6);
    ft_putchar_fd(str_putchar_fd1, 1);

    // Test2
    char str_putchar_fd2 = 'A';
    write(1, "\n\n2.Original: |A| \n", 19);
    write(1, "Exp: ", 5);
    write(1, &str_putchar_fd2, 1);
    write(1, "\nRes: ", 6);
    ft_putchar_fd(str_putchar_fd2, 1);

    // Test3
    char str_putchar_fd3 = '\0';
    write(1, "\n\n3.Original: |\0| \n", 19);
    write(1, "Exp: ", 5);
    write(1, &str_putchar_fd3, 1);
    write(1, "\nRes: ", 6);
    ft_putchar_fd(str_putchar_fd3, 1);

    write(1, "\n", 1);

    return (0);
}