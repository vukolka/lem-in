/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 19:02:22 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/26 19:02:23 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t a;

	a = 0;
	i = ft_strlen(s1);
	while (*s2 != '\0' && a < n)
	{
		s1[i] = *s2;
		s2++;
		i++;
		a++;
	}
	s1[i] = '\0';
	return (s1);
}
