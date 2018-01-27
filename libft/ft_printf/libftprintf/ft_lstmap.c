/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:28:48 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:28:49 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	create_lst(t_list **new, t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;

	if (lst->next != NULL)
		create_lst(new, lst->next, f);
	temp = ft_lstnew(lst->content, lst->content_size);
	temp = f(temp);
	ft_lstadd(new, temp);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *output;

	if (lst == NULL)
		return (NULL);
	create_lst(&output, lst, f);
	return (output);
}
