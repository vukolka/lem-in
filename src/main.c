/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 17:57:06 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 17:57:08 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <classes_lib.h>
#include <new.h>
#include <room.h>
#include <ft_printf.h>
#include "lemin.h"

int		main(int argc, char **argv)
{
	make_classes();
	if (argc < 2)
		ft_print_error(PRINT_USAGE);
	if (argc > 2)
		ft_print_error(TO_MANY_ARGS);
	solve(argv[1]);
	return (0);
}
