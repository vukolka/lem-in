

#include <stdarg.h>
#include <libft.h>
#include "String.h"
#include "new.h"

static t_class	hidden_string;
const void		*string;

static void 	*string_ctor(void *s_self, va_list *ap)
{
	t_string	*self;
	const char 	*text;

	self = s_self;
	text = va_arg(*ap, const char *);
	self->text = ft_strnew(ft_strlen(text));
	if (!self->text)
		return (NULL);
	ft_strcpy(self->text, text);
	return (self);
}

static void		*string_dtor(void *s_self)
{
	t_string *self;

	self = s_self;
	if (!self || !self->text)
		return (self);
	free(self->text);
	self->text = 0;
	return (self);
}

static void		*string_clone(const void *s_self)
{
	const t_string *self;

	self = s_self;
	if (self)
		return (new(string, self->text));
	else
		return (NULL);
}

static int 		string_differ(const void *s_self, const void *s_b)
{
	const t_string *self;
	const t_string *b;

	self = s_self;
	b = s_b;
	if (self == b)
		return (0);
	if (!self || !b || b->class != string || self->class != string)
		return (1);
	return (ft_strcmp(self->text, b->text));
}

void			string_init()
{
	hidden_string.size = sizeof(t_string);
	hidden_string.ctor = string_ctor;
	hidden_string.dtor = string_dtor;
	hidden_string.differ = string_differ;
	hidden_string.clone = string_clone;
	string = &hidden_string;
}
