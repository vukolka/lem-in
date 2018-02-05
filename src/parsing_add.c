/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 18:59:35 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 18:59:36 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include <get_next_line.h>
#include <room.h>
#include <new.h>
#include "lemin.h"

void			get_map_list_add(int fd, t_env *env, char *line)
{
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

int				is_room(char *line)
{
	size_t	i;

	if (*line == 'L')
		ft_print_error(INVALID_MAP);
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

void			get_head_or_end(int fd, t_env *env, char **line)
{
	int		flag;

	if (ft_strcmp(*line, "##start") == 0)
		flag = 1;
	else if (ft_strcmp(*line, "##end") == 0)
		flag = 2;
	else
	{
		free(*line);
		return ;
	}
	if ((flag == 1 && env->head) || (flag == 2 && env->end))
		ft_print_error(INVALID_MAP);
	free(*line);
	get_next_line(fd, line);
	if (!(is_room(*line)))
		ft_print_error(INVALID_MAP);
	if (flag == 1)
		add_room(*line, env, 0);
	else if (flag == 2)
		add_room(*line, env, 1);
}

int				is_a_connection(char *line)
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

int				make_connection(const char *name1,
								const char *name2, t_llist *map)
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
