#include <stdio.h>
#include <classes_lib.h>
#include <new.h>
#include <MLXConn.h>
#include <room.h>
#include <ft_printf.h>
#include "lemin.h"

int 	in_mid_way(t_ant *ants, int total_ants, void *end)
{
	int i;

	i = 0;
	while (i < total_ants)
	{
		if (ants[i].room != end)
			return (1);
		i++;
	}
	return (0);
}

int		make_step(t_ant *ant, t_room *end)
{
	t_room *current;
	t_room	*best;
	t_llist *conns;
	t_room	*temp;

	best = NULL;
	current = (t_room *)ant->room;
	if (current->weight == 0)
		return ;
	conns = current->conns;
	while (conns)
	{
		temp = conns->content;
		if (temp == end)
		{
			best = end;
			break ;
		}
		if (temp->weight < current->weight
			&& !temp->ant)
		{
			if (!best)
				best = temp;
			if (temp->weight < best->weight)
				best = temp;
		}
		conns = conns->next;
	}
	if (best)
	{
		ant->room = best;
		best->ant = 1;
		current->ant = 0;
		ft_printf("L%d-%s ", ant->id, best->name);
		return (1);
	}
	return (0);
}

void	move_ants(t_env *env)
{
	t_ant	ants[env->total_ants];
	int 	i;
	int 	moved;

	moved = 0;
	i = 0;
	while (i < env->total_ants)
	{
		ants[i].id = i + 1;
		ants[i].room = env->head;
		i++;
	}
	i = 0;
	while (in_mid_way(ants, env->total_ants, env->end))
	{
		while (i < env->total_ants)
		{
			if (ants[i].room != env->end)
				if (make_step(&ants[i], env->end))
					moved = 1;
			i++;
		}
		i = 0;
		if (!moved)
			ft_print_error(INVALID_MAP);
		moved = 0;
		ft_printf("\n");
	}
}
void	solve(char *filename)
{
	static t_env	env;
	t_llist *map;
	t_room *current;

	parse_map(filename, &env);
	mark_map(&env);
	map = env.map;
	set_weight(env.head, 2147483647);
	while (map)
	{
		current = map->content;
		ft_printf("roomname: %s, weight: %d\n", current->name, current->weight);
		map = map->next;
	}
	move_ants(&env);
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