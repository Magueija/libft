# LIBFT

This project was completed in March 2021 as part of the 42 school. The goal was to create a library containing a number of functions already existing in C libraries as well as additional ones, to be used in future projects.


## Getting Started

Run the command `make` to create the **libft.a** library file located in the *bin* folder. See the example bellow :
```
cd libft
make
gcc -I./include -L./bin/ -lft main.c -o test
```

<br />

In future projects, the libft will be used by placing this libft folder in the projects folder. The libft.a library will be compiled at the same time as the project by adding the following rule to the Makefile :
```
libft:
    make -C libft/
```

As well as the following flags to the compilation of the sources of the project :
```
-I./libft/include -L./libft/bin/ -lft
```

<br />

All available **Makefile** commands :
 - `make debug`       : creates *libft.a*, but with debug flags (-g -fsanitize=address);
 - `make norm`        : checks the norm on all files or only for a folder like `make norm folder=char`, [norminette](https://github.com/42School/norminette/) needs to be installed;
 - `make clean`       : removes all object files;
 - `make fclean`      : removes all object files and *libft.a*;
 - `make clean_dep`   : removes all dependencies files;
 - `make clean_debug` : removes all debug files and folders;
 - `make clean_all`   : equals to *make fclean* && *make clean_dep* && *make clean_debug*;
 - `make re_debug`    : equals to *make fclean* && *make debug*;
 - `make re`          : equals to *make fclean* && *make*;


## Available functions

  - **Characters** - *char/* :
    - `ft_isalpha`     : Checks for an alphabetic character.
    - `ft_isdigit`     : Checks for a digit (0 through 9).
    - `ft_isalnum`     : Checks for an alphanumeric character.
    - `ft_isascii`     : Checks whether 'c' is a 7-bit unsigned char value that fits into the ASCII character set.
    - `ft_isprint`     : Checks for any printable character including space.
    - `ft_isblank`     : Checks for a blank character; that is, a space or a tab.
    - `ft_isinvisible` : Checks for an invisible character that fits into the ASCII character set.
    - `ft_isspace`     : Checks for white-space characters; these are: space, form-feed, newline, carriage return, horizontal tab, and vertical tab.
	- `ft_issignal`    : Checks if a char is a plus(+) or a minus(-) signal.
    - `ft_islower`     : Checks for a lower-case letter.
    - `ft_isupper`     : Checks for an uppercase letter.


  - **Conversions** - *conv/* :
    - `ft_itoa_base`          : Converts a number to a given base but first check if the base is valid.
    - `ft_itoa_base_prefix`    : Converts a number to a given base with a base prefix but first check if the base is valid.
    - `ft_uitoa_base`         : Converts an unsigned number to a given base but first check if the base is valid.
    - `ft_uitoa_base_prefix`   : Converts an unsigned number to a given base with base prefix but first check if the base is valid.
    - `ft_hitoa`              : Converts a short number to string.
    - `ft_itoa`               : Converts an integer to string.
    - `ft_itoa_rec`           : Converts an integer to string recursively.
    - `ft_litoa`              : Converts a long number to string.
    - `ft_llitoa`             : Converts a long long number to string.
    - `ft_uhitoa`             : Converts an unsigned short number to string.
    - `ft_uitoa`              : Converts an unsigned integer to string.
    - `ft_ulitoa`             : Converts an unsigned long number to string.
    - `ft_ullitoa`            : Converts an unsigned long long number to string.
    - `ft_ftoa`               : Converts a float number to string.
    - `ft_dtoa`               : Converts a double number to string.
    - `ft_ldtoa`              : Converts a long double number to string.
    - `ft_itoo`               : Converts a number to octal with or without prefix (0).
    - `ft_uitoo`              : Converts an unsigned number to octal with or without prefix (0).
    - `ft_itoh`               : Converts a number to hexadecimal with or without prefix (0x).
    - `ft_uitoh`              : Converts an unsigned number to hexadecimal with or without prefix (0x).
    - `ft_etoa`               : Converts a long double number to scientific notation (string).
    - `ft_wctostr`            : Converts a wide character to a string composed of single-byte characters.
    - `ft_strwctostr`         : Converts wide char string to single char string.
    - `ft_atoi`               : Converts the initial portion of the string pointed to by 'nptr' to int. The number is searched after space characters (ft_isspace()) and then signals; ends with a non digit character.
    - `ft_strconvchar`        : Modifies a string content with a conversion function (ex. ft_toupper()).
    - `ft_toupper`            : Converts the letter 'c' to upper case, if possible.
    - `ft_tolower`            : Converts the letter 'c' to lower case, if possible.


  - **Files** - *files/* :
    - `get_next_line` : With a static variable, reads each line of a file until EOF. Every time this function is called it returns the next line of the file. It can be used on multiple file descriptors at the same time. The BUFFER_SIZE can be changed during the compilation using the flag -D (gcc -D BUFFER_SIZE=42).


  - **Lists** - *lst/* :
    - `ft_lstnew`       : Allocates (with malloc(3)) and returns a new element. The variable 'content' is initialized with the value of the parameter. The variable 'next' is initialized to NULL.
    - `ft_lstlast`      : Returns the last element of the list.
    - `ft_lstmap`       : Iterates the list 'lst' and applies the function 'f' to the content of each element. Creates a new list resulting of the successive applications of the function 'f'. The del function is used to delete the content of an element, if needed.
    - `ft_lstadd_front` : Adds the element 'new' at the beginning of the list.
    - `ft_lstadd_back`  : Adds the element 'new' at the end of the list.
    - `ft_lstdelone`    : Takes as a parameter an element and frees the memory of the elements content using the function 'del' given as a parameter and free the element. The memory of next isn't freed.
    - `ft_lstclear`     : Deletes and frees the given element and every successor of that element, using the function 'del' and free(3). Finally, the pointer to the list is set to NULL.
    - `ft_lstiter`      : Iterates the list 'lst' and applies the function 'f' to the content of each element.
    - `ft_lstsize`      : Counts the number of elements in a list.


  - **Mathematics** - *math/* :
    - `ft_powh`   : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_pow`    : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_powl`   : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_powll`  : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_powf`   : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_powd`   : Returns the value of 'n' raised to the power of 'expn'.
    - `ft_powld`  : Returns the value of 'n' raised to the power of 'expn'.


  - **Memory** - *mem/* :
    - `ft_bzero`      : Sets the first 'n' bytes of the area starting at 's' to zero (bytes containing char '\0').
    - `ft_malloc`     : Allocates memory for an array of 'nelem' elements of size 'elsize' each and returns a pointer to the allocated memory. If (elsize == sizeof(char)) the memory is filled with spaces (' ') and it is null ('\0') terminated, else the memory is set to zero.
    - `ft_calloc`     : Allocates memory for an array of 'nelem' elements of size 'elsize' each and returns a pointer to the allocated memory. The memory is set to zero.
    - `ft_free`       : Frees the memory pointed by '\*pt' and, if exists, sets it to NULL.
	- `ft_freemtx`    : Frees the memory pointed by the matrix '**pt' and, if exists, sets it to NULL.
    - `ft_swap`       : Swaps the memory of '\*s1' and '\*s2'. If 'tofree' isn't 0, '\*s2' is freed.
    - `ft_memset`     : Fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'c'.
    - `ft_memcpy`     : Copies 'n' bytes from memory area 'src' to memory area 'dest'. The memory areas must not overlap.
    - `ft_memccpy`    : Copies no more than 'n' bytes from memory area 'src' to memory area 'dest', stopping when the character 'c' is found.
    - `ft_memmove`    : Copies 'n' bytes from memory area 'src' to memory area 'dest'. The memory areas may overlap.
    - `ft_memchr`     : Scans the initial 'n' bytes of the memory area pointed to by 's' for the first instance of 'c'. Both 'c' and the bytes of the memory area pointed to by 's' are interpreted as unsigned char.
    - `ft_memrchr`    : Is like the ft_memchr() function, except that it searches backward from the end of the 'n' bytes pointed to by 's' instead of forward from the beginning.
    - `ft_mtxcalloc`  : Allocates memory for a matrix of 'nrows' rows of size 'rsize' and 'ncols' columns of size 'csize' each and returns a pointer to the allocated memory. The memory is set to zero.
    - `ft_memcmp`     : Compares the first 'n' bytes (each interpreted as unsigned char) of the memory areas 's1' and 's2'.


  - **Numbers** - *nbr/* :
    - `ft_nbdigits`           : Counts the number of digits of the number 'n'.
    - `ft_nbdigits_unsigned`  : Counts the number of digits of the unsigned number 'n'.
    - `ft_nbdigits_float`      : Counts the number of digits, after and before dot, of the long double number 'n'.
    - `ft_nbdigits_base`      : Counts the number of digits of the number 'n' with a base of size 'base_len'.
    - `ft_isnegative`         : Checks if a number is negative and the changes the number pointer by 'n' to its absolute. If the number value is LONG_LONG_MIN then 1 is subtracted and 2 is returned.
    - `ft_isnegative_float`    : Checks if a number is negative and the changes the number pointer by 'n' to its absolute. If the number value is LDBL_MIN then 1 is subtracted and 2 is returned.
    - `ft_isnan`              : Checks if a number is not a number (nan).
    - `ft_isinf`              : Checks if a number is infinite (inf or -inf).
    - `ft_ispinf`             : Checks if a number is positive infinite (inf).
    - `ft_isninf`             : Checks if a number is negative infinite (-inf).


  - **Norm** - *norm/* :
    - `ft_ternpt`     : Checks the given condition and returns the value pointed by 'val1' if true else returns pointed by 'val2', similar to ternaries ( ? : ). If needed to free the non-returned value, 'tofree' must be non 0.
    - `ft_ternchar`   : Checks the given condition and returns the char 'val1' if true else returns the char 'val2', similar to ternaries ( ? : ).
    - `ft_ternint`    : Checks the given condition and returns the long 'val1' if true else returns the long 'val2', similar to ternaries ( ? : ).
    - `ft_ternllint`  : Checks the given condition and returns the long long 'val1' if true else returns the long long 'val2', similar to ternaries ( ? : ).
    - `ft_ternfloat`   : Checks the given condition and returns the long double 'val1' if true else returns the long double 'val2', similar to ternaries ( ? : ).


  - **Output** - *put/* :
    - `ft_putchar_fd`   : Outputs the character 'c' to the given file descriptor.
    - `ft_putstr_fd`    : Outputs the string 's' to the given filedescriptor.
    - `ft_putnstr_fd`   : Outputs a max size 'len' of the string 's' to the given file descriptor.
    - `ft_putfstr_fd`   : Outputs the string 's' of the forced size 'len' to the given file descriptor. If (len > ft_strlen(s)) the the program will explode, use ft_putnstr_fd() instead.
    - `ft_putendl_fd`   : Outputs the string 's' to the given file descriptor, followed by a newline.
    - `ft_putnbr_fd`    : Outputs the integer 'n' to the given file descriptor.
    - `ft_putllnbr_fd`  : Outputs the long long number 'n' to the given file descriptor.


  - **Strings** - *str/* :
    - `ft_strreplace` : Replaces the occurrences of 'toreplace' to 'replacer' in the string 'str'.
    - `ft_strchr`     : Returns a pointer to the first occurrence of the character 'c' in the string 'str'.
    - `ft_strrchr`    : Returns a pointer to the last occurrence of the character 'c' in the string 'str'.
    - `ft_strnstr`    : Locates the first occurrence of the null-terminated string 'needle' in the string 'haystack', where not more than 'n' characters are searched. Characters that appear after a '\0' character are not searched.
    - `ft_strdup`     : Returns a pointer to a new string which is a duplicate of the string 's'.
    - `ft_substr`     : Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at 'index' start and is of maximum size 'len'.
    - `ft_strjoin`    : Allocates (with malloc(3)) and returns a newstring, which is the result of the concatenationof 's1' and 's2'.
    - `ft_strtrim`    : Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
    - `ft_strmapi`    : Applies the function 'f' to each character of the string 's' to create a new string (with malloc(3)) resulting from successive applications of 'f'.
    - `ft_split`      : Allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array is ended with a NULL pointer.
    - `ft_strlen`     : Calculates the length of the string 'str', excluding the terminating null byte ('\0').
    - `ft_strnlen`    : Calculates the length, at most 'maxlen' bytes, of the string 's', excluding the terminating null byte ('\0').
    - `ft_strlcpy`    : Copy strings. Takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as 'size' is larger than 0). Note that a byte for the NUL should be included in 'size'. The string 'src' must be NUL-terminated. (See *./doc/strlcat_&_strlcpy_explained.pdf*).
    - `ft_strlcat`    : Concatenate strings. Takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as there is at least one byte free in 'dst'). Note that a byte for the NUL should be included in 'size'. Both 'src' and 'dst' must be NUL-terminated. (See *./doc/strlcat_&_strlcpy_explained.pdf*).
    - `ft_strncmp`    : Compares the first (at most) 'n' bytes of 's1' and 's2'. It returns an integer less than, equal to, or greater than zero if 's1' is found, respectively, to be less than, to match, or be greater than 's2'.


## Testing

The project was tested with the *test/* files and with the following testers:
 - For some functions:
    - [libftTester](https://github.com/Tripouille/libftTester)
    - [Libftest](https://github.com/jtoty/Libftest)
    - [libft-unit-test](https://github.com/alelievr/libft-unit-test)
 - For *get_next_line*:
    - [gnlTester](https://github.com/Tripouille/gnlTester.git)
    - [42TESTERS-GNL](https://github.com/Mazoise/42TESTERS-GNL)
    - [42cursus_gnl_tests](https://github.com/mrjvs/42cursus_gnl_tests)

Thanks to everyone who made these testers! Helped me a lot! :heart:

## Updating

The project is updated regularly with new functions that could be useful for other projects, or when I learn something new, or when I realize my code looks awful. :wink:

All modifications must respect the [42 norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).

## Authors

  - **[Magueija](https://github.com/Magueija)**
