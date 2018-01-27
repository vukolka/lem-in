/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proccess_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:37:00 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:37:01 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*process_format(t_format *current, va_list ap)
{
	char *result;

	result = get_right_format(current, ap);
	result = apply_flags(current, result);
	return (result);
}
