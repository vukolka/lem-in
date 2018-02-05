/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room_lib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:12:56 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:12:57 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <room.h>
#include <libft.h>
#include <new.h>
#include <ft_printf.h>
#include <get_next_line.h>
#include "lemin.h"

void	add_room(char *line, t_env *env, int id)
{
	size_t	i;
	char	*name;
	int		x;
	int		y;

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

int		is_room_of_roomname(const void *s_self, const void *s_roomname)
{
	const char		*roomname;
	const t_room	*room;

	roomname = (const char *)s_roomname;
	if (!s_self || !roomname)
		return (-1);
	room = (const t_room*)s_self;
	if (ft_strequ(room->name, roomname))
		return (1);
	return (0);
}

int		in_mid_way(t_ant *ants, int total_ants, void *end)
{
	int i;

	i = 0;
	while (i < total_ants)
	{
		if (ants[i].room != end)
			return (1);
		i++;
	}
	return (0);
}

void	print_map(char *s_filename)
{
	int			fd;
	static char *filename;
	char		*line;
	static int	printed;

	if (s_filename || printed)
	{
		filename = s_filename;
		return ;
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_print_error(INVALID_MAP);
	while (get_next_line(fd, &line))
	{
		ft_printf("%s\n", line);
		free(line);
	}
	ft_printf("\n");
	printed = 1;
	close(fd);
}
