/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:03:51 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 20:03:54 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;
	size_t	i;

	if (size == 0)
		return (NULL);
	i = 0;
	res = (void*)malloc(size);
	if (res != NULL)
		while (i < size)
		{
			((char*)res)[i] = 0;
			i++;
		}
	return (res);
}
