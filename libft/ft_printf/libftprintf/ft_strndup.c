/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 17:07:57 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/30 17:07:58 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	char *ret;

	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strncpy(ret, src, len);
	return (ret);
}
