/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:25:37 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 20:17:02 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;

	cpy = (char *)malloc(ft_strlen(str) + 1);
	if (!cpy)
		return (0);
	ft_memcpy(cpy, str, ft_strlen(str) + 1);
	return (cpy);
}
