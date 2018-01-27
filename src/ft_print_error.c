#include <ft_printf.h>
#include "ant.h"

void 	ft_print_error(int error)
{
	if (error == PRINT_USAGE)
		ft_printf("usage: ./lem-in map");
	else if (error == TO_MANY_ARGS)
		ft_printf("error: to many arguments");
	else if (error == INVALID_MAP)
		ft_printf("error: invalid map");
	ft_printf("\n");
	exit(1);
}