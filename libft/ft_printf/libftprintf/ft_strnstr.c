/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:09:28 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/27 21:09:29 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*b)
		return ((char*)a);
	while (a[i] != '\0')
	{
		while (b[j] != '\0')
		{
			if (b[j] != a[i + j] || (i + j) >= len)
			{
				j = 0;
				break ;
			}
			j++;
		}
		if (b[j] == '\0')
			return ((char*)&a[i]);
		i++;
	}
	return (NULL);
}
