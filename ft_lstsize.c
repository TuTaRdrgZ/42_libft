/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:12:56 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/18 15:59:12 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*actual;

	if (!lst)
		return (0);
	counter = 0;
	actual = lst;
	while (actual)
	{
		counter++;
		actual = actual->next;
	}
	return (counter);
}
