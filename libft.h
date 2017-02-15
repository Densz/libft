/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:49:40 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/15 18:12:31 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <wchar.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdint.h>

/*
** LIBFT
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char const *s);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *str);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_isspace(int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_ishex(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *a, const char *b, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strnjoin(int n, ...);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_swap(int *a, int *b);
int					ft_isblank(int c);
char				*ft_strrev(char *str);
int					ft_ispunct(int c);
char				*ft_strchar(char c, size_t size);
void				ft_write_null(void);
int					ft_intlen(int n);
long long			ft_abs(long long n);
void				ft_lstaddend(t_list **alst, t_list *new);
t_list				*ft_lstselectsort(t_list *lst, int (*cmp)(void*, void*));
int					ft_lstsize(t_list *lst);
void				ft_print_tab(int **tab, int line, int column);

/*
** FT_PRINTF
*/

typedef struct		s_flags
{
	int				left_justify;
	int				fill_w_zero;
	int				pos_nul;
	int				is_blank;
	int				is_sharp;
	int				size_lenght;
	int				size_prec;
	int				which_letter;
	int				h;
	int				l;
	int				j;
	int				z;
}					t_flags;

int					ft_printf(const char *format, ...);

int					ft_check_letter(va_list ap, char c, t_flags flaggs);
int					ft_check_there_is_letter(char c);
t_flags				get_width(int *i, t_flags b, va_list ap);
t_flags				get_precision(const char *s, int *i, t_flags b, va_list ap);

char				*ft_strchar(char c, size_t size);

int					ft_printf_c(va_list ap, t_flags flaggs);
int					ft_printf_c_maj(va_list ap, t_flags flaggs);
int					ft_printf_i(va_list ap, t_flags flaggs, char c);
int					ft_printf_s(va_list ap, t_flags flaggs);
int					ft_printf_s_maj(va_list ap, t_flags flaggs);
int					ft_printf_u(va_list ap, t_flags flaggs, char c);
int					ft_printf_o(va_list ap, t_flags flaggs, char c);
int					ft_printf_x(va_list ap, t_flags flaggs);
int					ft_printf_x_maj(va_list ap, t_flags flaggs);
int					ft_printf_p(va_list ap, t_flags flaggs);
int					ft_print_per_cent(t_flags flaggs);

char				*ft_check_if_flags_str(t_flags flaggs, char *str);
char				*ft_check_if_flags_int(t_flags flaggs, char *str);

char				*ft_size_lenght(t_flags flaggs, char *str);
char				*ft_size_lenght_int(t_flags flaggs, char *str);
char				*ft_size_prec(t_flags flaggs, char *str);
char				*ft_size_prec_int(t_flags flaggs, char *str, int negative);

char				*ft_is_blank(t_flags flaggs, char *str, int negative);
char				*ft_is_pos_nul(t_flags flaggs, char *str, int negative);

char				*convert_int_to_octal(uintmax_t i);
char				*convert_int_to_hex(uintmax_t i);
char				*convert_int_to_hex_maj(uintmax_t i);

char				*ft_itoa_intmax_t(intmax_t n);
char				*ft_itoa_uintmax_t(uintmax_t n);
int					ft_atoi_intmax_t(const char *str);

intmax_t			arg_signed_modifier(va_list ap, t_flags b);
uintmax_t			arg_unsigned_modifier(va_list ap, t_flags b);

char				*ft_unicode(wchar_t c);

int					ft_free_return(char **str);

void				ft_lenght_c(t_flags *b, char **str);
int					ft_check_strong_bite(char byte);
int					ft_apply_width(t_flags b, char c);

int					ft_is_flags(char c);
char				*ftf_join_flags(char *str, t_flags b, char *tmp);
char				*ft_join_unicode(char *out_unicode, wchar_t *str);
char				*ft_convert_octal(char *str, uintmax_t i, t_flags b);
int					ft_free_flags_return(char **str, t_flags b);
char				*ft_join_flags_int(t_flags b, char *str);
char				*ft_join_lenght_int(t_flags b, char *tmp, char *str);

/*
** GET_NET_LINE
*/

# define BUFF_SIZE 1000

typedef struct		s_fd
{
	int				n_fd;
	char			*str;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);

#endif
