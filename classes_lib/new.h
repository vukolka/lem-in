#ifndef CLASSES_LIB_NEW_H
#define CLASSES_LIB_NEW_H

# include <stddef.h>
#include <stdarg.h>

void	*new(const void *class, ...);
void 	delete(void *item);
void	*clone(const void *self);
int 	differ(const void *self, const void *b);
size_t	size_of(const void *self);

typedef struct	s_class
{
	size_t		size;
	void		*(*ctor) (void *self, va_list *ap);
	void		*(*dtor) (void *self);
	void		*(*clone) (const void *self);
	int 		(*differ) (const void *self, const void *b);
}				t_class;

#endif //CLASSES_LIB_NEW_H
