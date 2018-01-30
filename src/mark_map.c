#include <queue.h>
#include <new.h>
#include <ft_printf.h>
#include <room.h>
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
				&&!((t_room*)(curr_conns->content))->visited)
				set_weight(curr_conns->content, current->weight + 1);
			enqueue(queue, curr_conns->content);
			curr_conns = curr_conns->next;
		}
	}
	delete(queue);
};