#include <stdio.h>
#include <classes_lib.h>
#include <new.h>
#include <MLXConn.h>
#include <room.h>
#include <ft_printf.h>
#include "lemin.h"

void	solve(char *filename)
{
	static t_env	env;

	parse_map(filename, &env);
	//get_solutions_list(&env);
	//sort_solutions_from_best(env.solutions);
	//while (in_mid_course)
	//	make_step(&env, &in_mid_course);
	//print_moves_stack(env.move_stack);
}

int		main(int argc, char **argv)
{
	int res;

	make_classes();
	if (argc < 2)
		ft_print_error(PRINT_USAGE);
	if (argc > 2)
		ft_print_error(TO_MANY_ARGS);
	solve(argv[1]);
	return (0);
}