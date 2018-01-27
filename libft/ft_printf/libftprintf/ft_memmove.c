/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:30:35 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 20:30:36 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*desination;
	size_t			i;

	i = 0;
	source = (unsigned char*)src;
	desination = (unsigned char*)dest;
	if (src > dest)
		while (i < n)
		{
			desination[i] = source[i];
			i++;
		}
	else if (src < dest)
		while (n-- > (size_t)0)
		{
			desination[n] = source[n];
		}
	return (dest);
}
