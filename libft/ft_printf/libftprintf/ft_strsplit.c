/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:23:34 by mvukolov          #+#    #+#             */
/*   Updated: 2017/10/31 12:23:39 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_amm(char const *s, char c)
{
	int i;

	i = 0;
	if (!(*s))
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static int	letters_amm(char const *s, char c)
{
	int i;

	if (!s || !c)
		return (-100);
	i = 0;
	while (*s == c && *s)
		s++;
	if (*s)
		while (*s && *s != c)
		{
			i++;
			s++;
		}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	if (!(res = (char**)malloc(sizeof(char**) * (words_amm(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if ((res[i] = ft_strnew(letters_amm(s, c))))
		{
			ft_strncpy(res[i], s, letters_amm(s, c));
			s += letters_amm(s, c);
		}
		else
			return (NULL);
		i++;
		while (*s == c && *s)
			s++;
	}
	res[i] = 0;
	return (res);
}
