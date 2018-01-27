/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 17:10:01 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 17:10:02 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict					*ft_dict_get(char *keyword, t_dict *dict)
{
	while (dict)
		if (*(dict->keyword) == *keyword)
			return (dict);
		else
			dict = dict->next;
	return (dict);
}
