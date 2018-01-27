/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:34:29 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:34:30 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static size_t	process_result(const char *format, va_list ap, char **res)
{
	size_t	total_len;
	size_t	i;
	char	*temp;

	i = 0;
	total_len = 0;
	while (format[i])
	{
		if (format[i] == MODCHAR)
		{
			*res = ft_conncat(*res, format, total_len, i);
			total_len += i;
			format += i + 1;
			i = apply_format(&format, &temp, ap);
			*res = ft_conncat(*res, temp, total_len, i);
			total_len += i;
			i = 0;
		}
		else
			i++;
	}
	i = ft_strlen(format);
	*res = ft_conncat(*res, format, total_len, i);
	total_len += i;
	return (total_len);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*res;
	size_t		size;

	res = NULL;
	va_start(ap, format);
	size = process_result(format, ap, &res);
	write(1, res, size);
	free(res);
	va_end(ap);
	return ((int)size);
}
