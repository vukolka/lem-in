#include <ft_printf.h>
#include "lemin.h"

void 	ft_print_error(int error)
{
	if (error == PRINT_USAGE)
		ft_printf("usage: ./lem-in map");
	else if (error == TO_MANY_ARGS)
		ft_printf("error: to many arguments");
	else if (error == INVALID_MAP)
		ft_printf("error: invalid map");
	else if (error == HAS_NO_SOLUTION)
		ft_printf("error: the map doesn't have any solutions");
	ft_printf("\n");
	exit(1);
}