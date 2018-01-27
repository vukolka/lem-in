/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:58:13 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:58:14 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int a, size_t len)
{
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	s += a;
	ret = (char*)malloc(len + 1);
	if (ret != NULL)
	{
		while (i < len)
		{
			ret[i] = s[i];
			i++;
		}
		ret[i] = 0;
		return (ret);
	}
	else
		return (NULL);
}
