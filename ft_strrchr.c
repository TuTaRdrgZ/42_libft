/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:47:35 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 19:54:50 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
  char *str = "hola como estas";
  int c = 'h';
  printf("%s\n", strrchr(str,c));
  printf("%s", ft_strrchr(str,c));
  return 0;
}*/
