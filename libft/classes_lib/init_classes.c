/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_classes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:51:16 by mvukolov          #+#    #+#             */
/*   Updated: 2018/03/27 11:31:46 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"
#include "room.h"
#include "queue.h"

void	make_classes(void)
{
	llist_init();
	room_init();
	queue_init();
}
