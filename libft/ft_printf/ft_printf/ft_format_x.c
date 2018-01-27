/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:56:22 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:56:23 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"
#include "ft_printf.h"

char	*ft_format_x(va_list ap, char *mod)
{
	unsigned long long int a;

	a = 0;
	if (ft_strequ(mod, "l"))
		a = va_arg(ap, unsigned long);
	else if (ft_strequ(mod, "ll"))
		a = va_arg(ap, unsigned long long);
	else if (ft_strequ(mod, "h"))
		a = va_arg(ap, unsigned int) & 0xFFFF;
	else if (ft_strequ(mod, "hh"))
		a = va_arg(ap, unsigned int) & 0xFF;
	else if (ft_strequ(mod, "j"))
		a = va_arg(ap, uintmax_t);
	else if (ft_strequ(mod, "z"))
		a = va_arg(ap, size_t);
	else if (*mod == 0)
		a = va_arg(ap, unsigned int);
	return (ft_itoa_base(a, 16));
}

char	*ft_format_xx(va_list ap, char *mod)
{
	char *a;

	a = ft_format_x(ap, mod);
	ft_strupper(a);
	return (a);
}
