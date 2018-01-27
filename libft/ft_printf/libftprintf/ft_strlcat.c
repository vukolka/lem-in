/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 19:39:55 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/26 19:39:56 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t i;
	size_t init;
	size_t srclen;

	srclen = ft_strlen(src);
	i = ft_strlen(dst);
	init = i;
	if (i > n)
		return (srclen + n);
	while (*src != '\0' && (i + 1) < n)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (srclen + init);
}
