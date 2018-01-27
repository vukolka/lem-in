#include "new.h"
#include "Linked_list.h"

static t_class	hidden_list;
const void		*g_list;

static void		*llst_ctor(void *s_self, va_list *ap)
{
	t_llist *self;

	self = s_self;
	self->content = va_arg(*ap, void *);
	self->next = NULL;
	return (self);
}

void			llst_add(void **s_self, void *s_new)
{
	t_llist *self;
	t_llist *new;

	new = s_new;
	self = *(t_llist**)s_self;
	if (self)
	{
		new->next = self;
		*s_self = new;
	}
	else
		*s_self = new;
}

void			llist_init()
{
	hidden_list.size = sizeof(t_llist);
	hidden_list.ctor = llst_ctor;
	hidden_list.dtor = NULL;
	hidden_list.differ = NULL;
	hidden_list.clone = NULL;
	g_list = &hidden_list;
}