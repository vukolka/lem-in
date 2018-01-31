#include <stdio.h>
#include <classes_lib.h>
#include <new.h>
#include <MLXConn.h>
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