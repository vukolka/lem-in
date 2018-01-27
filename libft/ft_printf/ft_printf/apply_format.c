/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:42:16 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:42:17 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void		checkifsupported(char *mod)
{
	size_t i;

	i = 0;
	while (mod[i])
	{
		if (!(ft_strchr(SUPPORTED, mod[i])))
		{
			write(2, mod, ft_strlen(mod));
			exit(0);
		}
		i++;
	}
}

size_t			apply_format(const char **format, char **res, va_list ap)
{
	int			i;
	size_t		size;
	char		*modstring;
	t_format	*current;

	current = (t_format*)malloc(sizeof(t_format));
	i = get_modificator(*format, &modstring);
	*format += i;
	checkifsupported(modstring);
	parse_modifiers(modstring, current);
	if (!(ft_strchr(MODSLIST, current->format[0])))
		exit(0);
	*res = process_format(current, ap);
	size = ft_strlen(*res);
	free(modstring);
	free(current->format);
	free(current);
	if ((modstring = ft_strchr(*res, -42)))
		*modstring = 0;
	return (size);
}
