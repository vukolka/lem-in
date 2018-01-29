#include <string.h>
#include <new.h>
#include <ant.h>
#include <Linked_list.h>
#include "lemin.h"

void make_ants_list(t_env *env)
{
	void	*ants;
	int		i;

	ants = NULL;
	i = 0;
	while (i < env->total_ants)
	{
		llst_add(&ants, new(g_list,
							new(g_ant, i, env->head)));
		i++;
	}
}