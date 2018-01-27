/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:47:47 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:47:48 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"
#include "ft_printf.h"

char	*ft_format_d(va_list ap, char *mod)
{
	long long int	a;

	a = 0;
	if (ft_strequ(mod, "l"))
		a = va_arg(ap, long);
	else if (ft_strequ(mod, "ll"))
		a = va_arg(ap, long long);
	else if (ft_strequ(mod, "h"))
		a = (short int)va_arg(ap, int);
	else if (ft_strequ(mod, "hh"))
		a = (char)va_arg(ap, int);
	else if (ft_strequ(mod, "j"))
		a = va_arg(ap, intmax_t);
	else if (ft_strequ(mod, "z"))
		a = va_arg(ap, long long int);
	else if (*mod == 0)
		a = va_arg(ap, int);
	return (ft_itoa(a));
}

char	*ft_format_dd(va_list ap, char *mod)
{
	long a;

	a = va_arg(ap, long);
	mod++;
	return (ft_itoa(a));
}
