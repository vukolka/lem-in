#include "new.h"
#include "Point.h"

static t_class	hidden_point;
const void		*point;

static void		*point_ctor(void *s_self, va_list *ap)
{
	t_point		*self;

	self = s_self;
	if (!self)
		return (NULL);
	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
	self->z = va_arg(*ap, int);
	return (self);
}

static void		*point_clone(const void *s_self)
{
	const t_point *self;

	self = s_self;
	if (self)
		return (new(point, self->x, self->y, self->z));
	else
		return (NULL);
}

static int 		point_differ(const void *s_self, const void *s_b)
{
	const t_point *self;
	const t_point *b;

	self = s_self;
	b = s_b;
	if (self == b)
		return (0);
	if (!self || !b || b->class != point || self->class != point)
		return (1);
	if (self->x != b->x || self->y != b->y || self->z != b->z)
		return (1);
	return (0);
}

void			point_init()
{
	hidden_point.size = sizeof(t_point);
	hidden_point.ctor = point_ctor;
	hidden_point.dtor = NULL;
	hidden_point.differ = point_differ;
	hidden_point.clone = point_clone;
	point = &hidden_point;
}