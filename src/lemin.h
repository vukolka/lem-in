#ifndef LEM_IN_LEMIN_H
# define LEM_IN_LEMIN_H
# include <Linked_list.h>
# define PRINT_USAGE 1
# define TO_MANY_ARGS 2
# define INVALID_MAP 3
# define HAS_NO_SOLUTION 4

typedef struct	s_env
{
	int 		total_ants;
	int 		at_exit;
	void		*move_stack;
	void		*map;
	void		*head;
	void		*end;
	void		*solutions;
	void		*ants;
}				t_env;

typedef struct	s_ant
{
	int 		id;
	void		*room;
	int 		moved;
}				t_ant;

void			solve(char *filename);
void			mark_map(t_env *env);
void			make_ants_list(t_env *env);
void			parse_map(char *file_name, t_env *env);
void 			ft_print_error(int error);
int 			move_to_room(void *s_dest, void *s_src);
int				room_is_empty(void *s_self);
int				is_room_of_roomname(const t_llist *s_self, const void* s_roomname);
#endif
