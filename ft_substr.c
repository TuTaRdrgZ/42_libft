/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:25:59 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 20:40:16 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	subs = (char *)malloc(len + 1);
	if (!subs || !s)
		return (NULL);
	while (i < ft_strlen(s) && j < len)
		subs[j++] = s[i++];
	subs[j] = '\0';
	return (subs);
}
