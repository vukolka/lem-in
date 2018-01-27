/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flags2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 16:53:16 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 16:53:17 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*process_sharp(t_format *format, char *s1)
{
	char	*res;
	char	form;
	int		kostil;

	kostil = 1;
	if ((*s1 == '0' && s1[1] == 0) || !*s1)
		kostil = 0;
	form = format->format[0];
	res = NULL;
	if (form == 'o' && kostil)
		res = ft_conncat(ft_strdup("0"), s1, 1, ft_strlen(s1));
	if (form == 'x' && kostil)
		res = ft_conncat(ft_strdup("0x"), s1, 2, ft_strlen(s1));
	if (form == 'X' && kostil)
		res = ft_conncat(ft_strdup("0X"), s1, 2, ft_strlen(s1));
	if (res)
	{
		free(s1);
		return (res);
	}
	return (s1);
}

void	subprocess_precision(char *res, const char *src, int len, int period)
{
	if (len > 0)
	{
		if (*src == '-')
		{
			*res = '-';
			ft_memset(res + 1, '0', len);
			ft_strcat(res, src + 1);
		}
		else
		{
			ft_memset(res, '0', len);
			ft_strcat(res, src);
		}
	}
	else
		ft_strncat(res, src, period);
}

char	*process_space(char *s1)
{
	char	*res;

	res = s1;
	if (s1[0] != '-' && s1[0] != '+'
		&& s1[0] != MODCHAR)
	{
		res = ft_conncat(ft_strdup(" "), s1, 1, ft_strlen(s1));
		free(s1);
	}
	return (res);
}

char	*process_precision(t_format *format, char *s1)
{
	char		*a;
	long int	i;
	int			period;

	if (*(format->format) == 's' && !*s1)
		return (s1);
	period = format->period;
	if (period == 0)
		return (s1);
	if (period == -1 && ft_strchr("xXuodi", *(format->format))
		&& !ft_atoi(s1))
	{
		if (format->format[0] == 'o' && format->sharp)
			return (s1);
		*s1 = 0;
		return (s1);
	}
	i = period - ft_strlen(s1);
	(ft_atoi(s1) < 0) ? i++ : 0;
	if (i < 0 && format->format[0] != 's')
		return (s1);
	a = ft_strnew(period);
	subprocess_precision(a, s1, i, period);
	free(s1);
	return (a);
}
