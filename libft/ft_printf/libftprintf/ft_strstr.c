/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:54:37 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/27 19:54:38 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
			{
				j = 0;
				break ;
			}
			j++;
		}
		if (!needle[j])
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
