/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:32:30 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 20:32:31 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *src, int c, size_t n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		*(unsigned char*)d = *(unsigned char*)src;
		if (*(unsigned char*)src == (unsigned char)c)
			return ((char*)d + 1);
		src = (char*)src + 1;
		d = (char*)d + 1;
		i++;
	}
	if (flag == 0)
		return (NULL);
	return (d);
}
