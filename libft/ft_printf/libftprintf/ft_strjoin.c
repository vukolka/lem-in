/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:55:47 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:55:48 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (s2 && s1 && (res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		while (*s1)
		{
			res[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			res[i] = *s2;
			i++;
			s2++;
		}
		res[i] = 0;
		return (res);
	}
	else
		return (NULL);
}
