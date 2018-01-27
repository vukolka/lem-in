/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:32:10 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:32:11 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_format_c(va_list ap, char *mod)
{
	char	a;
	char	*ret;

	*mod = *mod;
	ret = ft_strnew(2);
	if (!ret)
		return (NULL);
	a = (char)va_arg(ap, int);
	if (a == 0)
		a = -42;
	ret[0] = a;
	ret[1] = 0;
	return (ret);
}
