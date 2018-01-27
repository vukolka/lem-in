/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:02:15 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 20:02:16 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	spaces_amm(const char *s)
{
	int		i;
	size_t	len;

	len = ft_strlen(s) - 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (len);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		i++;
		len--;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		ws_ammount;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	ws_ammount = spaces_amm(s);
	len = ft_strlen(s) - ws_ammount;
	res = (char*)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (len > 0)
	{
		res[i] = *s;
		i++;
		s++;
		len--;
	}
	res[i] = 0;
	return (res);
}
