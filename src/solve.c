/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:11:42 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:11:43 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <room.h>
#include "lemin.h"
#include <string.h>
#include <ft_printf.h>
#include <fcntl.h>
#include <get_next_line.h>

t_room	*find_best_move(t_llist *conns, t_room *current, t_room *end)
{
	t_room *temp;
	t_room *best;

	best = NULL;
	while (conns)
	{
		temp = (t_room *)conns->content;
		if (temp == end)
		{
			best = end;
			break ;
		}
		if (temp->weight < current->weight
			&& !temp->ant)
			best = temp;
		conns = conns->next;
	}
	return (best);
}

int		make_step(t_ant *ant, t_room *end)
{
	t_room	*current;
	t_room	*best;
	t_llist	*conns;
	t_room	*temp;

	best = NULL;
	current = (t_room *)ant->room;
	if (current->weight == 0)
		return (0);
	conns = current->conns;
	best = find_best_move(conns, current, end);
	if (best)
	{
		print_map(NULL);
		ant->room = best;
		best->ant = 1;
		current->ant = 0;
		ft_printf("L%d-%s ", ant->id, best->name);
		return (1);
	}
	return (0);
}

void	perform_move(t_ant *ants, t_env *env)
{
	int i;
	int moved;
	int moved_at_all;

	init_shit_omg(&moved_at_all, &i, &moved);
	while (i < env->total_ants)
	{
		if (ants[i].moved)
		{
			i++;
			continue ;
		}
		if (ants[i].room != env->end)
			if (make_step(&ants[i], env->end))
			{
				ants[i].moved = 1;
				moved = 1;
				moved_at_all = 1;
			}
		i++;
		if (moved)
			init_shit_omg(&i, &moved, &i);
	}
	if (!moved_at_all)
		ft_print_error(INVALID_MAP);
}

void	move_ants(t_env *env)
{
	t_ant	ants[env->total_ants];
	int		i;

	i = 0;
	while (i < env->total_ants)
	{
		ants[i].id = i + 1;
		ants[i].room = env->head;
		ants[i].moved = 0;
		i++;
	}
	while (in_mid_way(ants, env->total_ants, env->end))
	{
		i = 0;
		perform_move(ants, env);
		while (i < env->total_ants)
			ants[i++].moved = 0;
		ft_printf("\n");
	}
}

void	solve(char *filename)
{
	static t_env	env;

	parse_map(filename, &env);
	mark_map(&env);
	set_weight(env.head, 2147483647);
	print_map(filename);
	move_ants(&env);
}
