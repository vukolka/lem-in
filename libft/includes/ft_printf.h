/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 16:55:35 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 16:55:36 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include "libft.h"
# define MODSLIST "sSpd%DioOuUxXcC"
# define MODCHAR '%'
# define MODSCHAR "lhjz"
# define SUPPORTED "1234567890sSpd%.DioOuUxXcClhjz#0 -+"

typedef struct	s_format
{
	int			sharp;
	int			f_width;
	int			space;
	int			zero;
	int			minus;
	int			plus;
	int			period;
	char		*format;
	char		*format_mod;
}				t_format;
char			*process_space(char *s1);
char			*process_sharp(t_format *format, char *s1);
char			*process_precision(t_format *format, char *s1);
void			subprocess_precision(char *res,
									const char *src, int len, int period);
int				ft_wstrlen(wchar_t *str);
char			*ft_format_uu(va_list ap, char *mod);
char			*ft_format_percent(va_list ap, char *mod);
char			*ft_format_xx(va_list ap, char *mod);
char			*ft_format_x(va_list ap, char *mod);
char			*ft_format_s(va_list ap, char *mod);
char			*ft_format_ss(va_list ap, char *mod);
char			*ft_format_c(va_list ap, char *mod);
char			*ft_format_p(va_list ap, char *mod);
char			*ft_format_u(va_list ap, char *mod);
char			*ft_format_o(va_list ap, char *mod);
char			*ft_format_d(va_list ap, char *mod);
char			*ft_format_dd(va_list ap, char *mod);
void			get_func_dict(t_dict **mods);
int				get_modificator(const char *format, char **modstring);
char			*get_right_format(t_format *current, va_list ap);
char			*ft_conncat(char *res, const char *src, size_t l1, size_t l2);
int				ft_printf(const char *format, ...);
t_format		*parse_modifiers(char *mods, t_format *current);
size_t			apply_format(const char **format, char **res, va_list ap);
char			*process_format(t_format *current, va_list ap);
char			*apply_flags(t_format *current, char *src);

#endif
