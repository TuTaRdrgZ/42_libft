/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:23:15 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 20:22:58 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
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
  printf("%s\n", strchr(str,c));
  printf("%s", ft_strchr(str,c));
  return 0;
}*/
