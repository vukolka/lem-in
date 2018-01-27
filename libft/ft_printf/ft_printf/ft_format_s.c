/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:25:44 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:25:46 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_wstrlen(wchar_t *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_format_s(va_list ap, char *mod)
{
	char *res;

	res = va_arg(ap, char*);
	if (res == NULL)
		res = ft_strdup("(null)");
	else
		res = ft_strdup(res);
	*mod = *mod;
	return (res);
}

void	ft_putwchar_fd(wchar_t chr, int fd)
{
	if (chr <= 0x7F)
		ft_putchar_fd(chr, fd);
	else if (chr <= 0x7FF)
	{
		ft_putchar_fd((chr >> 6) + 0xC0, fd);
		ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
	else if (chr <= 0xFFFF)
	{
		ft_putchar_fd((chr >> 12) + 0xE0, fd);
		ft_putchar_fd(((chr >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
	else if (chr <= 0x10FFFF)
	{
		ft_putchar_fd((chr >> 18) + 0xF0, fd);
		ft_putchar_fd(((chr >> 12) & 0x3F) + 0x80, fd);
		ft_putchar_fd(((chr >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
}

char	*ft_format_ss(va_list ap, char *mod)
{
	wchar_t		*a;
	size_t		i;

	*mod = *mod;
	i = 0;
	a = va_arg(ap, wchar_t *);
	while (*a)
		ft_putwchar_fd(*a++, 1);
	return (ft_strdup(""));
}
