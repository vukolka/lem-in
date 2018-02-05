/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:53:28 by mvukolov          #+#    #+#             */
/*   Updated: 2018/01/28 12:53:30 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "new.h"
#include "linked_list.h"

static t_class	g_hidden_list;
const void		*g_list;

static void		*llst_ctor(void *s_self, va_list *ap)
{
	t_llist *self;

	self = s_self;
	self->content = va_arg(*ap, void *);
	self->next = NULL;
	return (self);
}

void			llst_add(void **s_self, void *s_new)
{
	t_llist *self;
	t_llist *new;

	new = s_new;
	self = *(t_llist**)s_self;
	if (self)
	{
		new->next = self;
		*s_self = new;
	}
	else
		*s_self = new;
}

void			*llst_find(const void *s_self, const void *info,
						int (*f)(const void *, const void *))
{
	const t_llist *self;

	self = s_self;
	while (self)
	{
		if (f(self->content, info))
			return (self->content);
		self = self->next;
	}
	return (NULL);
}

void			llist_init(void)
{
	g_hidden_list.size = sizeof(t_llist);
	g_hidden_list.ctor = llst_ctor;
	g_hidden_list.dtor = NULL;
	g_hidden_list.differ = NULL;
	g_hidden_list.clone = NULL;
	g_list = &g_hidden_list;
}
