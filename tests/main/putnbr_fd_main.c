#include "libft.h"

int     main()
{
    // #################
    // ## FT_PUTNBR_FD
    write(1, "\n", 1);

    write(1, "#################\n", 18);
    write(1, "## ft_putnbr_fd\n", 16);

    // Test0
    int str_putnbr_fd0 = 1234567890;
    write(1, "\n0.Original: |1234567890| \n", 27);
    write(1, "Exp: 1234567890", 15);
    write(1, "\nRes: ", 6);
    ft_putnbr_fd(str_putnbr_fd0, 1);

    // Test1
    int str_putnbr_fd1 = -5;
    write(1, "\n\n1.Original: |-5| \n", 20);
    write(1, "Exp: -5", 7);
    write(1, "\nRes: ", 6);
    ft_putnbr_fd(str_putnbr_fd1, 2);

    // Test2
    int str_putnbr_fd2 = 0;
    write(1, "\n\n2.Original: |0| \n", 19);
    write(1, "Exp: 0", 6);
    write(1, "\nRes: ", 6);
    ft_putnbr_fd(str_putnbr_fd2, 1);

    // Test3
    int str_putnbr_fd3 = 2147483647;
    write(1, "\n\n3.Original: |2147483647| \n", 28);
    write(1, "Exp: 2147483647", 15);
    write(1, "\nRes: ", 6);
    ft_putnbr_fd(str_putnbr_fd3, 1);

    // Test4
    int str_putnbr_fd4 = -2147483648;
    write(1, "\n\n4.Original: |-2147483648| \n", 29);
    write(1, "Exp: -2147483648", 16);
    write(1, "\nRes: ", 6);
    ft_putnbr_fd(str_putnbr_fd4, 1);

    // Test4
    long str_putnbr_fd5 = 9223372036854775807;
    write(1, "\n\n4.Original: |9223372036854775807| \n", 37);
    write(1, "Exp: 9223372036854775807", 24);
    write(1, "\nRes: ", 6);
    ft_putllnbr_fd(str_putnbr_fd5, 1);

    write(1, "\n", 1);

    return (0);
}
