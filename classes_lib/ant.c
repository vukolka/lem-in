#include "new.h"
#include "ant.h"

static t_class	g_hidden_ant;
const void		*g_ant;

static void		*ant_ctor(void *s_self, va_list *ap)
{
	t_ant *self;

	self = s_self;
	if (!self)
		return (NULL);
	self->id = va_arg(*ap, int);
	self->room = va_arg(*ap, void *);
	if (!self->room)
		return (NULL);
}

void			ant_init(void)
{
	g_hidden_ant.ctor = ant_ctor;
	g_hidden_ant.size = sizeof(t_ant);
	g_hidden_ant.dtor = NULL;
	g_hidden_ant.differ = NULL;
	g_hidden_ant.clone = NULL;
	g_ant = &g_hidden_ant;
}