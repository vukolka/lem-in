/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 16:47:50 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 16:47:51 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*process_width(t_format *current, char *s1)
{
	char		*a;
	long int	i;
	int			period;
	char		c;

	c = ' ';
	period = current->f_width;
	i = period - ft_strlen(s1);
	if (i < 0)
		return (s1);
	a = ft_strnew(period);
	if (current->minus)
	{
		ft_strcpy(a, s1);
		ft_memset(a + ft_strlen(s1), c, i);
	}
	else
	{
		ft_memset(a, c, i);
		ft_strcat(a, s1);
	}
	free(s1);
	return (a);
}

void	subprocess_zero_width(t_format *format,
							char *res, const char *src, int len)
{
	if (format->minus)
	{
		ft_strcpy(res, src);
		ft_memset(res + ft_strlen(src), ' ', len);
	}
	else
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
}

char	*process_zero_width(t_format *fomat, char *s1)
{
	char		*a;
	long int	i;
	int			period;

	if (fomat->plus && ft_atoi(s1) > 0
		&& fomat->zero)
		fomat->f_width--;
	if (!fomat->zero || fomat->period)
		return (s1);
	period = fomat->f_width;
	i = period - ft_strlen(s1);
	if (i < 0)
		return (s1);
	a = ft_strnew(period);
	subprocess_zero_width(fomat, a, s1, i);
	free(s1);
	return (a);
}

char	*process_plus(int plus, char *s1)
{
	char	*res;

	if (!plus)
		return (s1);
	res = s1;
	if (s1[0] != '-')
	{
		res = ft_conncat(ft_strdup("+"), s1, 1, ft_strlen(s1));
		free(s1);
	}
	return (res);
}

char	*apply_flags(t_format *current, char *src)
{
	if (src == NULL)
		return (NULL);
	if (current->format[0] != 'c')
		src = process_precision(current, src);
	if (current->sharp
		&& current->zero)
		current->f_width -= 2;
	src = process_zero_width(current, src);
	if (current->sharp)
		src = process_sharp(current, src);
	if (current->format[0] != 'u')
		src = process_plus(current->plus, src);
	if (current->space && current->format[0] != 'u'
		&& current->format[0] != 'c')
		if (src[0] != '-')
			src = process_space(src);
	if (!current->zero || current->period)
		src = process_width(current, src);
	return (src);
}
