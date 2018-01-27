/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:34:30 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 20:34:33 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (!s || !f)
		return (NULL);
	ret = (char*)malloc(ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ret[i] = f(s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
