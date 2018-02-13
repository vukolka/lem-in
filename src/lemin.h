/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 17:56:38 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 17:56:39 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_LEMIN_H
# define LEM_IN_LEMIN_H
# include <Linked_list.h>
# define PRINT_USAGE 1
# define TO_MANY_ARGS 2
# define INVALID_MAP 3
# define HAS_NO_SOLUTION 4

typedef struct	s_env
{
	int			total_ants;
	int			at_exit;
	void		*move_stack;
	void		*map;
	void		*head;
	void		*end;
	void		*solutions;
	void		*ants;
}				t_env;

typedef struct	s_ant
{
	int			id;
	void		*room;
	int			moved;
}				t_ant;

void			get_map_list_add(int fd, t_env *env, char *line);
void			init_shit_omg(int *a, int *b, int *c);
int				command_isnt_allowed(char *string);
int				set_connection(char *line, t_llist *map);
int				is_room(char *line);
void			print_map(char *s_filename);
void			add_room(char *line, t_env *env, int id);
int				in_mid_way(t_ant *ants, int total_ants, void *end);
void			solve(char *filename);
void			mark_map(t_env *env);
void			parse_map(char *file_name, t_env *env);
void			ft_print_error(int error);
int				is_room_of_roomname(const void *s_self, const void *s_roomname);
void			get_head_or_end(int fd, t_env *env, char **line);
int				is_a_connection(char *line);
int				make_connection(const char *name1,
								const char *name2, t_llist *map);

#endif
