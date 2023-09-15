/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:03:00 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/13 11:12:01 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*result;

	result = malloc(num_elements * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, num_elements * size);
		return (result);
	}
}
