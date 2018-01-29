#include <room.h>
#include <libft.h>

int		room_is_empty(const void *s_self)
{
	const t_room *self;

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

int		is_room_of_roomname(const void *s_self, const void* s_roomname)
{
	const char *roomname;
	const t_room *room;

	roomname = (const char *)s_roomname;
	if (!s_self || !roomname)
		return (-1);
	room = (const t_room*)s_self;
	if (ft_strequ(room->name, roomname))
		return (1);
	return (0);
}