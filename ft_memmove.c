/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:56:39 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/14 18:05:06 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*dest;
	size_t	i;

	i = len;
	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp == dest)
		return (dest);
	if (tmp < dest)
	{
		while (i-- > 0)
			dest[i] = tmp[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = tmp[i];
			i++;
		}
	}
	return (dest);
}
