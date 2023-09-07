/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:23:29 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/06 13:15:19 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	x = ft_strlen(dest);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (src[i] != '\0' && x < size - 1 && size > 0)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	if (destlen > size)
		destlen = size;
	return (destlen + srclen);
}
