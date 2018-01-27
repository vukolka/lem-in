#include <stdio.h>
#include <classes_lib.h>
#include <new.h>
#include <MLXConn.h>
#include <room.h>
#include <ft_printf.h>
#include "ant.h"

int		main(int argc, char **argv)
{
	static t_env	env;

	if (argc < 2)
		ft_print_error(PRINT_USAGE);
	if (argc > 2)
		ft_print_error(TO_MANY_ARGS);
	parse_map(argv[1], &env);
	make_classes();
	return (0);
}
/*
 *
 *
 *
 */