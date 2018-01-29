#include <wchar.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libft.h>
#include <new.h>
#include <room.h>
#include "lemin.h"

static void add_room(char *line, t_env *env, int id)
{
	size_t	i;
	char	*name;
	int		x;
	int 	y;

	i = 0;
	while (line[i] != ' ' && line[i])
		i++;
	name = ft_strnew(i);
	ft_strncpy(name, line, i);
	i++;
	x = ft_atoi(line + i);
	while (ft_isdigit(line[i]))
		i++;
	i++;
	y = ft_atoi(line + i);
	llst_add(&(env->map), new(g_list,
			new(g_room, name, id, x, y)));
	if (id == 0)
		env->head = ((t_llist*)(env->map))->content;
	if (id == 1)
		env->end = ((t_llist*)(env->map))->content;
	free(name);
}

static int 		is_room(char *line)
{
	size_t	i;

	i = 0;
	while (line[i] != ' ' && line[i])
		i++;
	if (!*line || !(ft_isdigit(line[i + 1])))
		return (0);
	i++;
	while (ft_isdigit(line[i]))
		i++;
	if (!*line || !(ft_isdigit(line[i + 1])))
		return (0);
	i++;
	while (ft_isdigit(line[i]))
		i++;
	if (line[i] != 0)
		return (0);
	return (1);
}

static void		get_head_or_end(int fd, t_env *env, char **line)
{
	int		flag;

	if (ft_strcmp(*line, "##start") == 0)
		flag = 1;
	else if (ft_strcmp(*line, "##end") == 0)
		flag = 2;
	else
	{
		free(*line);
		return;
	}
	free(*line);
	get_next_line(fd, line);
	if (!(is_room(*line)))
		ft_print_error(INVALID_MAP);
	if (flag == 1)
		add_room(*line, env, 0);
	else if (flag == 2)
		add_room(*line, env, 1);
}

static int		is_a_connection(char *line)
{
	while (*line && *line != '-')
		line++;
	if (!*line || !*(line + 1))
		return (0);
	line++;
	while (*line)
	{
		if (*line == '-')
			return (0);
		line++;
	}
	return (1);
}

static int make_connection(const char *name1, const char *name2, t_llist *map)
{
	t_room *room_dst;
	t_room *room_src;

	room_dst = llst_find(map, name1, is_room_of_roomname);
	room_src = llst_find(map, name2, is_room_of_roomname);
	if (!room_dst || !room_src)
		return (0);
	llst_add((void **)(&(room_dst->conns)), new(g_list, room_src));
	llst_add((void **)(&(room_src->conns)), new(g_list, room_dst));
	return (1);
}

static	int		set_connection(char *line, t_llist *map)
{
	char	*name1;
	char	*name2;
	size_t	i;

	i = 0;
	while (line[i] != '-')
		i++;
	name1 = ft_strnew(i);
	ft_strncpy(name1, line, i);
	line += i;
	i = 0;
	while (line[i])
		i++;
	name2 = ft_strnew(i);
	ft_strcpy(name2, line + 1);
	if (make_connection(name1, name2, map))
	{
		free(name1);
		free(name2);
		return (1);
	}
	free(name1);
	free(name2);
	return (0);
}

static int command_isnt_allowed(char *string)
{
	if (ft_strcmp(string, "##start") == 0)
		return (1);
	else if (ft_strcmp(string, "##end") == 0)
		return (1);
	return (0);
}

static void		get_map_list(int fd, t_env *env)
{
	char	*line;
	int		id;

	id = 2;
	while (get_next_line(fd, &line))
	{
		if (*line == '#')
		{
			if (*(line + 1) == '#')
				get_head_or_end(fd, env, &line);
		}
		else if (is_room(line))
			add_room(line, env, id++);
		else if (is_a_connection(line))
		{
			if (!(set_connection(line, env->map)))
				ft_print_error(INVALID_MAP);
			free(line);
			break ;
		}
		else
			ft_print_error(INVALID_MAP);
		free(line);
	}
	if (env->head == NULL || env->end == NULL)
		ft_print_error(INVALID_MAP);
	while (get_next_line(fd, &line))
	{
		if (is_a_connection(line))
		{
			if (!(set_connection(line, env->map)))
				ft_print_error(INVALID_MAP);
		}
		else if (*line == '#')
		{
			if (command_isnt_allowed(line + 1))
				ft_print_error(INVALID_MAP);
		}
		else
			ft_print_error(INVALID_MAP);
		free(line);
	}
}

static	int 	get_ants(int fd)
{
	char	*line;
	int		total_ants;
	int		i;

	i = 0;
	get_next_line(fd, &line);
	total_ants = ft_atoi(line);
	if (!total_ants)
		ft_print_error(INVALID_MAP);
	while (ft_isdigit(line[i]))
		i++;
	while (ft_isspace(line[i]))
		i++;
	if (line[i] != 0)
		ft_print_error(INVALID_MAP);
	free(line);
	return  (total_ants);
}



void			parse_map(char *file_name, t_env *env)
{
	int 	fd;

	fd = open(file_name, O_RDONLY);
	env->total_ants = get_ants(fd);
	get_map_list(fd, env);
	make_ants_list(env);
	close(fd);
}
