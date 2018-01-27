/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 11:28:10 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/31 11:28:11 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dict_add(t_dict **dict, char *keyword,
					char *(*func)(va_list ap, char *s1))
{
	t_dict	*new;

	new = *dict;
	if (*dict)
	{
		while (new->next)
			new = new->next;
		new->next = ft_dict_create(new->index + 1, keyword, func);
	}
	else
		*dict = ft_dict_create(0, keyword, func);
}
