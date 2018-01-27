/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:50:45 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:50:47 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_format_p(va_list ap, char *mod)
{
	char *a;
	char *ret;

	*mod = *mod;
	a = va_arg(ap, char*);
	ret = ft_strdup("0x");
	ft_strcat(ret, ft_itoa_base((unsigned long int)a, 16));
	return (ret);
}
