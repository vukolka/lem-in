/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 11:28:39 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/31 11:28:40 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict	*ft_dict_create(int i, char *keyword,
						char *(*func) (va_list ap, char *s1))
{
	t_dict	*newdict;

	newdict = malloc(sizeof(t_dict));
	if (!newdict)
		return (NULL);
	newdict->keyword = ft_strdup(keyword);
	newdict->func = func;
	newdict->index = i;
	newdict->next = NULL;
	return (newdict);
}
