#ifndef LEM_IN_ANT_H
#define LEM_IN_ANT_H
# include <Linked_list.h>
# define PRINT_USAGE 1
# define TO_MANY_ARGS 2
# define INVALID_MAP 3

typedef struct	s_env
{
	int 		total_ants;
	int 		at_exit;
	void		*move_stack;
	void		*map;
	void		*head;
	void		*end;
}				t_env;

void			parse_map(char *file_name, t_env *env);
void 			ft_print_error(int error);
int 			move_to_room(void *s_dest, void *s_src);
int				room_is_empty(void *s_self);

#endif //LEM_IN_ANT_H
