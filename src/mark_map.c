/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 18:50:47 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 18:50:48 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <queue.h>
#include <new.h>
#include <ft_printf.h>
#include <room.h>
#include <fcntl.h>
#include <get_next_line.h>
#include "lemin.h"

void	mark_map(t_env *env)
{
	void	*queue;
	t_room	*current;
	t_llist	*curr_conns;

	queue = new(g_queue);
	enqueue(queue, env->end);
	while (!(queue_is_empty(queue)))
	{
		current = dequeue(queue);
		if (current->visited || current == env->head)
			continue ;
		current->visited = 1;
		curr_conns = current->conns;
		while (curr_conns)
		{
			if (curr_conns->content != env->head
				&& !((t_room*)(curr_conns->content))->visited)
				set_weight(curr_conns->content, current->weight + 1);
			enqueue(queue, curr_conns->content);
			curr_conns = curr_conns->next;
		}
	}
	delete(queue);
}
