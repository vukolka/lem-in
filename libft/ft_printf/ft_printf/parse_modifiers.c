/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_modifiers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 16:53:46 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 16:54:06 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	fill_with_zeros(t_format *current)
{
	current->sharp = 0;
	current->f_width = 0;
	current->space = 0;
	current->zero = 0;
	current->minus = 0;
	current->plus = 0;
	current->period = 0;
	current->format = ft_strnew(1);
	current->format_mod = ft_strnew(3);
}

void		parse_period(t_format *current, char **mods)
{
	if (**mods != '.')
		return ;
	(*mods)++;
	current->period = ft_atoi(*mods);
	if (current->period == 0)
		current->period = -1;
	while (ft_isdigit(**mods))
		(*mods)++;
}

void		parse_xsflags(t_format *current, char mod)
{
	if (mod == '#')
		current->sharp = 1;
	else if (mod == '+')
		current->plus = 1;
	else if (mod == ' ')
		current->space = 1;
	else if (mod == '-')
		current->minus = 1;
	else if (mod == '0')
		current->zero = 1;
}

int			parse_conv(char *mods, t_format *current)
{
	if (ft_strchr(MODSLIST, *mods))
	{
		if (*mods == 'i')
			*mods = 'd';
		(current->format)[0] = *mods;
		return (1);
	}
	return (0);
}

t_format	*parse_modifiers(char *mods, t_format *current)
{
	int i;

	i = 0;
	fill_with_zeros(current);
	while (*mods)
	{
		parse_xsflags(current, *mods);
		parse_period(current, &mods);
		if (ft_isdigit(*mods) && *mods != '0')
		{
			current->f_width = ft_atoi(mods);
			while (ft_isdigit(*mods))
				mods++;
			continue;
		}
		while (*mods && ft_strchr(MODSCHAR, *mods))
		{
			(current->format_mod)[i++] = *mods;
			mods++;
		}
		if (parse_conv(mods, current))
			return (current);
		mods++;
	}
	return (NULL);
}
