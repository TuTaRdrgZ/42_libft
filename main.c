/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:50:30 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/15 13:20:34 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("<%s>", ft_strtrim(argv[1], argv[2]));
	return (0);
}
