/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:29:10 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:29:11 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*newlist;
	unsigned char	*newcontent;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	(*newlist).content_size = content_size;
	if (content == NULL)
	{
		(*newlist).content_size = 0;
		return (newlist);
	}
	(*newlist).content = malloc(content_size);
	newcontent = (unsigned char*)(*newlist).content;
	newlist->next = NULL;
	if (newcontent != NULL)
	{
		while (content_size-- > 0 && content != NULL)
		{
			*newcontent = *((unsigned char*)content);
			newcontent++;
			content = (unsigned char*)content + 1;
		}
		return (newlist);
	}
	return (NULL);
}
