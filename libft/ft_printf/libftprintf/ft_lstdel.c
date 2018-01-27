/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:28:31 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:28:32 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;

	if (alst == NULL)
		return ;
	while ((**alst).next != NULL)
	{
		next = (**alst).next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
	ft_lstdelone(alst, del);
}
