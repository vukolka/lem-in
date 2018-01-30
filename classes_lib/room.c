#include <libft.h>
#include <ft_printf.h>
#include "new.h"
#include "room.h"

static t_class	hidden_room;
const void		*g_room;

static void		*room_ctor(void *s_self, va_list *ap)
{
	t_room *self;

	self = s_self;
	if (!self)
		return (NULL);
	self->name = ft_strdup(va_arg(*ap, char *));
	self->id = va_arg(*ap, int);
	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
	self->conns = NULL;
	self->ant = 0;
	self->weight = 0;
	self->visited = 0;
	if (!self->name)
	{
		ft_printf("malloc error\n");
		exit(1);
	}
	return (self);
}

static void		*room_dtor(void *s_self)
{
	t_room *self;

	self = s_self;
	if (self && self->name)
		free(self->name);
	return (self);
}

void			set_ants(void *s_self, int ants)
{
	t_room *self;

	self = s_self;
	if (!self)
	{
		ft_printf("couldn't set ants\n");
		return ;
	}
	self->ant = ants;
}

void			set_weight(void *s_self, int weight)
{
	t_room *self;

	self = s_self;
	if (!self)
	{
		ft_printf("couldn't set type\n");
		return ;
	}
	self->weight = weight;
}

void			room_init()
{
	hidden_room.size = sizeof(t_room);
	hidden_room.dtor = room_dtor;
	hidden_room.ctor = room_ctor;
	hidden_room.clone = NULL;
	hidden_room.differ = NULL;
	g_room = &hidden_room;
}