/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:52:44 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:52:45 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"
#include "new.h"
#include <string.h>
#include "Linked_list.h"

static t_class	g_hidden_queue;
const void		*g_queue;

static void		*queue_ctor(void *s_self, va_list *ap)
{
	t_queue *self;

	(void)ap;
	self = (t_queue*)s_self;
	if (!self)
		return (NULL);
	self->front = NULL;
	self->rear = NULL;
	return (self);
}

void			enqueue(void *s_self, void const *element)
{
	t_queue *self;
	t_llist	*temp;

	self = s_self;
	temp = (t_llist*)self->rear;
	if (!self->front && !self->rear)
	{
		self->front = new(g_list, element);
		self->rear = self->front;
	}
	else
	{
		temp->next = new(g_list, element);
		self->rear = temp->next;
	}
}

void			*dequeue(void *s_self)
{
	t_queue *self;
	t_llist *temp;
	void	*toret;

	self = s_self;
	temp = (t_llist*)self->front;
	toret = temp->content;
	self->front = temp->next;
	if (self->front == NULL)
		self->rear = NULL;
	delete(temp);
	return (toret);
}

void			queue_init(void)
{
	g_hidden_queue.ctor = queue_ctor;
	g_hidden_queue.size = sizeof(t_queue);
	g_hidden_queue.dtor = NULL;
	g_hidden_queue.differ = NULL;
	g_hidden_queue.clone = NULL;
	g_queue = &g_hidden_queue;
}

int				queue_is_empty(const void *s_self)
{
	const t_queue *self;

	self = s_self;
	if (self->front && self->rear)
		return (0);
	return (1);
}
