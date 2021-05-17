/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 01:48:25 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/17 16:03:35 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define FD_STDIN 1
# define FD_STDOUT 2
# define FD_STDERROR 3

# define FD_EOF 0

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isblank(int c);
int				ft_isinvisible(int c);
int				ft_isspace(int c);
int				ft_islower(int c);
int				ft_isupper(int c);

short			ft_isvalidbase(char *base, size_t *base_len);
char			*ft_itoa_base(long long n, char *base);
char			*ft_itoa_base_prefix(long long n, char *base, char *pfx);
char			*ft_uitoa_base(unsigned long long n, char *base);
char			*ft_uitoa_base_prefix(unsigned long long n,
					char *base, char *pfx);
char			*ft_hitoa(short int n);
char			*ft_itoa(int n);
char			*ft_itoa_rec(int n);
char			*ft_litoa(long int n);
char			*ft_llitoa(long long int n);
char			*ft_uhitoa(unsigned short int n);
char			*ft_uitoa(unsigned int n);
char			*ft_ulitoa(unsigned long int n);
char			*ft_ullitoa(unsigned long long int n);
char			*ft_itoo(long long n, short has_pfx);
char			*ft_uitoo(unsigned long long n, short has_pfx);
char			*ft_itoh(long long n, short has_pfx);
char			*ft_uitoh(unsigned long long n, short has_pfx);
char			*ft_ftoa(float n, unsigned short prec);
char			*ft_dtoa(double n, unsigned short prec);
char			*ft_ldtoa(long double n, unsigned short prec);
void			ft_fillbefore_str_ldtoa(char *str,
					long double *n, short nbefore, short neg);
char			*ft_fillafter_str_ldtoa(char *str,
					long double n, short prec, short nbefore);
char			*ft_etoa(long double n, unsigned short prec);
char			*ft_ftocientific(long double n, short neg,
					unsigned short prec, int *exp);
char			*ft_wctostr(wchar_t c);
char			*ft_strwctostr(wchar_t *wstr);
int				ft_atoi(const char *nptr);
void			ft_strconvchar(char *s, int (*f)(int));
int				ft_toupper(int c);
int				ft_tolower(int c);

int				get_next_line(int fd, char **line);

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
int				ft_lstsize(t_list *lst);

int				ft_powh(short n, unsigned short expn);
long			ft_pow(int n, unsigned int expn);
long long		ft_powl(long n, unsigned long expn);
long long		ft_powll(long long n, unsigned long expn);
double			ft_powf(float n, unsigned long expn);
long double		ft_powd(double n, unsigned long expn);
long double		ft_powld(long double n, unsigned long expn);

void			ft_bzero(void *s, size_t n);
void			*ft_malloc(size_t nelem, size_t elsize);
void			*ft_calloc(size_t nelem, size_t elsize);
void			ft_free(void **pt);
void			ft_swap(void **s1, void **s2, short tofree);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memrchr(const void *s, int c, size_t n);
void			**ft_mtxcalloc(size_t nrows, size_t rsize,
					size_t ncols, size_t csize);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

short			ft_nbdigits(long long int n);
short			ft_nbdigits_unsigned(unsigned long long n);
short			ft_nbdigits_float(long double n, short	*nbefore);
short			ft_nbdigits_base(long long n, size_t base_len);
short			ft_isnegative(void *n);
short			ft_isnegative_float(void *n);
int				ft_isnan(long double n);
int				ft_isinf(long double n);
int				ft_ispinf(long double n);
int				ft_isninf(long double n);

void			*ft_ternpt(int condition, void *val1, void *val2, short tofree);
char			ft_ternchar(int condition, char val1, char val2);
long			ft_ternint(int condition, long val1, long val2);
long long		ft_ternllint(int condition, long long val1, long long val2);
long double		ft_ternfloat(int condition, long double val1, long double val2);

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnstr_fd(char *s, size_t max_len, int fd);
void			ft_putfstr_fd(char *s, size_t len, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putllnbr_fd(long long n, int fd);

void			ft_strreplace(char *str, int toreplace, int replacer);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			**ft_split(char const *s, char c);
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *s, size_t maxlen);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
