#include "libft.h"

int     main()
{
    // #################
    // ## FT_PUTENDL_FD
    write(1, "\n", 1);

    write(1, "#################\n", 18);
    write(1, "## ft_putendl_fd\n", 17);

    // Test0
    char str_putendl_fd0[] = "Lorem ipsum dolor sit amet";
    write(1, "\n0.Original: |Lorem ipsum dolor sit amet| \n", 43);
    write(1, "Exp: ", 5);
    write(1, str_putendl_fd0, 26);
    write(1, "\n", 1);
    write(1, "\nRes: ", 6);
    ft_putendl_fd(str_putendl_fd0, 1);

    // Test1
    char str_putendl_fd1[] = "Lorem ipsum dolor sit amet";
    write(1, "\n\n1.Original: |Lorem ipsum dolor sit amet| \n", 44);
    write(1, "Exp: ", 5);
    write(1, str_putendl_fd1 + 12, 14);
    write(1, "\n", 1);
    write(1, "\nRes: ", 6);
    ft_putendl_fd(str_putendl_fd1 + 12, 1);

    // Test2
    char str_putendl_fd2[] = "0123456789";
    write(1, "\n\n2.Original: |0123456789| \n", 28);
    write(1, "Exp: ", 5);
    write(1, str_putendl_fd2, 10);
    write(1, "\n", 1);
    write(1, "\nRes: ", 6);
    ft_putendl_fd(str_putendl_fd2, 1);

    // Test3
    char str_putendl_fd3[] = "\0";
    write(1, "\n\n3.Original: |\0| \n", 19);
    write(1, "Exp: ", 5);
    write(1, str_putendl_fd3, 1);
    write(1, "\n", 1);
    write(1, "\nRes: ", 6);
    ft_putendl_fd(str_putendl_fd3, 1);

    write(1, "\n", 1);

    return (0);
}