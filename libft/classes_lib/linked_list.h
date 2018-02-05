/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:56:18 by mvukolov          #+#    #+#             */
/*   Updated: 2018/02/05 19:56:19 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_LINKED_LIST_H
# define FDF_LINKED_LIST_H

extern const void	*g_list;
void				llist_init();
void				llst_add(void **s_self, void *s_new);

typedef struct		s_llist
{
	void			*class;
	void			*content;
	struct s_llist	*next;
}					t_llist;

void				*llst_find(const void *s_self, const void *info,
							int(*f)(const void *, const void *));

#endif
