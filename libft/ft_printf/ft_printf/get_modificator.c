/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_modificator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:41:02 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:41:03 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_is_modifier(char c, char *listmodifier)
{
	while (*listmodifier)
		if (c == *listmodifier++)
			return (1);
	return (0);
}

int			get_modificator(const char *format, char **modstring)
{
	int		res;
	int		i;
	char	*formatlist;

	res = 0;
	formatlist = ft_strdup(MODSLIST);
	i = 0;
	while (format[i])
	{
		if ((res = ft_is_modifier(format[i], formatlist)))
		{
			i++;
			*modstring = ft_strndup(format, i);
			res = 1;
			break ;
		}
		i++;
	}
	free(formatlist);
	if (res == 0)
	{
		*modstring = ft_strdup("0");
		return (res);
	}
	return (i);
}
