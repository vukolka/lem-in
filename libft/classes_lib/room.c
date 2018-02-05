/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:53:57 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:53:58 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>
#include "new.h"
#include "room.h"

static t_class	g_hidden_room;
const void		*g_room;

static void		*room_ctor(void *s_self, va_list *ap)
{
	t_room *self;

	self = s_self;
	if (!self)
		return (NULL);
	self->name = ft_strdup(va_arg(*ap, char *));
	self->id = va_arg(*ap, int);
	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
	self->conns = NULL;
	self->ant = 0;
	self->weight = 0;
	self->visited = 0;
	if (!self->name)
	{
		ft_printf("malloc error\n");
		exit(1);
	}
	return (self);
}

static void		*room_dtor(void *s_self)
{
	t_room *self;

	self = s_self;
	if (self && self->name)
		free(self->name);
	return (self);
}

void			set_ants(void *s_self, int ants)
{
	t_room *self;

	self = s_self;
	if (!self)
	{
		ft_printf("couldn't set ants\n");
		return ;
	}
	self->ant = ants;
}

void			set_weight(void *s_self, int weight)
{
	t_room *self;

	self = s_self;
	if (!self)
	{
		ft_printf("couldn't set type\n");
		return ;
	}
	self->weight = weight;
}

void			room_init(void)
{
	g_hidden_room.size = sizeof(t_room);
	g_hidden_room.dtor = room_dtor;
	g_hidden_room.ctor = room_ctor;
	g_hidden_room.clone = NULL;
	g_hidden_room.differ = NULL;
	g_room = &g_hidden_room;
}
