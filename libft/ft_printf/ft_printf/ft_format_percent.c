/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:52:11 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:52:12 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_format_percent(va_list ap, char *mod)
{
	ap = ap + 2;
	mod++;
	return (ft_strdup("%"));
}
