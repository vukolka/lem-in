/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:19:42 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/25 19:19:43 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>

static char		*ft_concat(char *s1, char *s2)
{
	char *toret;

	toret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!toret)
		return (NULL);
	ft_strcpy(toret, s1);
	ft_strcat(toret, s2);
	free(s1);
	return (toret);
}

static void		write_to_list(int fd, char *buff, t_currfd **list)
{
	t_currfd *temp;

	temp = *list;
	while (temp)
	{
		if (temp->fd == fd)
			break ;
		temp = temp->next;
	}
	if (temp)
		temp->content = ft_concat(temp->content, buff);
	else
	{
		temp = malloc(sizeof(t_currfd));
		temp->fd = fd;
		temp->content = ft_strdup(buff);
		temp->next = *list;
		*list = temp;
	}
}

static void		free_current_lst(int fd, t_currfd **list)
{
	t_currfd *temp;
	t_currfd *pre;

	pre = *list;
	temp = pre;
	while (temp)
	{
		if (temp->fd == fd)
			break ;
		pre = temp;
		temp = temp->next;
	}
	if (temp == pre)
		*list = temp->next;
	else
		pre->next = temp->next;
	free(temp->content);
	free(temp);
}

static void		write_line(int fd, t_currfd **list, char **line)
{
	t_currfd	*temp;
	char		*a;

	temp = *list;
	while (temp)
	{
		if (temp->fd == fd)
			break ;
		temp = temp->next;
	}
	if (!temp)
		return ;
	if ((a = ft_strchr(temp->content, '\n')))
	{
		*a = 0;
		*line = ft_strdup(temp->content);
		a = ft_strdup(a + 1);
		free(temp->content);
		temp->content = a;
		return ;
	}
	if (*(temp->content))
		*line = ft_strdup(temp->content);
	free_current_lst(fd, list);
}

int				get_next_line(const int fd, char **line)
{
	static t_currfd	*list;
	int				red;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0)
		return (-1);
	if (line == 0)
		return (-1);
	*line = 0;
	while ((red = read(fd, buff, BUFF_SIZE)))
	{
		if (red < 0)
			return (-1);
		buff[red] = 0;
		write_to_list(fd, buff, &list);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	write_line(fd, &list, line);
	if (*line)
		return (1);
	else
		return (0);
}
