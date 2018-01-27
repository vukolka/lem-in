/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:29:08 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/26 18:29:13 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (len > i && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (i < len)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
