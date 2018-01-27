#include <room.h>

int		room_is_empty(void *s_self)
{
	t_room *self;

	self = s_self;
	if (!self)
		return (-1);
	if (self->ant)
		return (0);
	else
		return (1);
}

int 	move_to_room(void *s_dest, void *s_src)
{
	t_room	*dest;
	t_room	*src;

	dest = s_dest;
	src = s_src;
	if ((dest->ant != 0 && dest->type != 2) || src->ant == 0)
		return (0);
	dest->ant = src->ant;
	if (src->type != 1)
		src->ant = 0;
	else
		src->ant--;
	return (1);
}
