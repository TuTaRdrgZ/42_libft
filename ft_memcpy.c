/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:42:43 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 19:45:38 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	if (!tmp || !s)
		return (0);
	while (n--)
		*tmp++ = *s++;
	return (dst);
}
