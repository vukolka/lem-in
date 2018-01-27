#ifndef LEM_IN_ROOM_H
#define LEM_IN_ROOM_H

#include "Linked_list.h"

extern const void 	*g_room;
void 				room_init();
void				set_type(void *s_self, char type);
void				set_ants(void *s_self, int ants);

typedef struct		s_room
{
	void 			*class;
	char 			*name;
	int 			id;
	int 			x;
	int 			y;
	int 			ant;
	t_llist			*conns;
	char 			type;
}					t_room;

#endif
