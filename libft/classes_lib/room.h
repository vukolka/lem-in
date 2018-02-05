/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:55:03 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:55:03 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_ROOM_H
# define LEM_IN_ROOM_H

# include "Linked_list.h"

extern const void	*g_room;
void				room_init();
void				set_weight(void *s_self, int weight);
void				set_ants(void *s_self, int ants);

typedef struct		s_room
{
	void			*class;
	char			*name;
	int				id;
	int				x;
	int				y;
	int				ant;
	t_llist			*conns;
	int				weight;
	char			visited;
}					t_room;

#endif
