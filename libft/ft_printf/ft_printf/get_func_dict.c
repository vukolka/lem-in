/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_func_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:56:43 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:56:45 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	get_func_dict(t_dict **mods)
{
	ft_dict_add(mods, "d", &ft_format_d);
	ft_dict_add(mods, "D", &ft_format_dd);
	ft_dict_add(mods, "i", &ft_format_d);
	ft_dict_add(mods, "x", &ft_format_x);
	ft_dict_add(mods, "X", &ft_format_xx);
	ft_dict_add(mods, "o", &ft_format_o);
	ft_dict_add(mods, "S", &ft_format_ss);
	ft_dict_add(mods, "s", &ft_format_s);
	ft_dict_add(mods, "c", &ft_format_c);
	ft_dict_add(mods, "C", &ft_format_c);
	ft_dict_add(mods, "p", &ft_format_p);
	ft_dict_add(mods, "%", &ft_format_percent);
	ft_dict_add(mods, "u", &ft_format_u);
	ft_dict_add(mods, "U", &ft_format_uu);
}
