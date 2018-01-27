/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:44:55 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/06 19:44:56 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_len(long long int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(long long int n)
{
	char	*ret;
	int		i;

	if ((unsigned long long)n == 9223372036854775808U)
		return (ft_strdup("-9223372036854775808"));
	if (n == -0)
		return (ft_strdup("0"));
	if (!(ret = ft_strnew(str_len(n))))
		return (NULL);
	i = str_len(n);
	if (n < 0)
	{
		n = -n;
		ret[0] = '-';
	}
	ret[i--] = 0;
	while (n > 0)
	{
		ret[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (ret);
}
