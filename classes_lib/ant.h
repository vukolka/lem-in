#ifndef LEM_IN_ANT_H
# define LEM_IN_ANT_H

typedef struct		s_ant
{
	void			*class;
	int 			id;
	void			*room;
}					t_ant;

extern const void	*g_ant;
void 				ant_init();

#endif
