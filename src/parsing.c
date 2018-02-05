/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:04:34 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:04:35 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <fcntl.h>
#include <get_next_line.h>
#include <libft.h>
#include <new.h>
#include <room.h>
#include "lemin.h"

int				set_connection(char *line, t_llist *map)
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

int				command_isnt_allowed(char *string)
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
}

static int		get_ants(int fd)
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
	return (total_ants);
}

void			parse_map(char *file_name, t_env *env)
{
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		ft_print_error(INVALID_MAP);
	env->total_ants = get_ants(fd);
	get_map_list(fd, env);
	close(fd);
}
