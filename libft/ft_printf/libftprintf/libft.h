/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:48:20 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/10 17:28:22 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define S1 (unsigned char*)s1
# define S2 (unsigned char*)s2
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef	struct			s_dict
{
	int					index;
	char				*keyword;
	char				*(*func) (va_list ap, char* s1);
	struct s_dict		*next;
}						t_dict;

int						ft_wstrlen(wchar_t *str);
int						ft_isspace(char c);
void					ft_strupper(char *a);
char					*ft_itoa_base(unsigned long long int n, int base);
char					*ft_strndup(const char *src, size_t len);
t_dict					*ft_dict_get(char *keyword, t_dict *dict);
t_dict					*ft_dict_create(int i,
										char *keyword,
										char *(*f) (va_list ap, char *s1));
void					ft_dict_add(t_dict **dict, char *keyword,
									char *(*f) (va_list ap, char *s1));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char					**ft_strsplit(char const *s, char c);
void					ft_strdel(char **as);
char					*ft_itoa(long long int n);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list					*ft_lstnew(void const *content, size_t content_size);
char					*ft_strrchr(const char *s, int c);
char					*ft_strsub(char const *s, unsigned int a, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char *s, char (*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					*ft_memalloc(size_t size);
char					*ft_strnew(size_t size);
void					ft_strclr(char *s);
void					ft_memdel(void **ap);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *d, const void *src, int c, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
void					ft_bzero(void *s, size_t n);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						ft_isprint(int c);
int						ft_isascii(int c);
int						ft_isalnum(int c);
int						ft_isdigit(int c);
char					*ft_strdup(const char *s1);
size_t					ft_strlen(const char *s);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t n);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
int						ft_isalpha(int c);
char					*ft_strnstr(const char *a, const char *b, size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
void					ft_putchar(char c);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
void					ft_putendl_fd(char const *s, int fd);
#endif
