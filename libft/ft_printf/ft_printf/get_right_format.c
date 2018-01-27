/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_right_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:36:20 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:36:21 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*get_right_format(t_format *current, va_list ap)
{
	static t_dict	*mods = NULL;
	t_dict			*curr;

	if (!mods)
		get_func_dict(&mods);
	if ((curr = ft_dict_get(current->format, mods)))
		return (curr->func(ap, current->format_mod));
	exit(0);
}
