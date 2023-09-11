/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:55:06 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/10 20:12:35 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((str1[i] != str2[i]))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
  char *s1 = "hola como estas";
  char *s2 = "hola como estas";
  printf("%d\n", ft_memcmp(s1, s2, c));
  printf("%d\n", memcmp(s1, s2, c));
  
  int arreglo1[] = {1, 2, 3, 4, 5, 7};
  int arreglo2[] = {1, 2, 3, 4, 5, 6};
  
  size_t tamano_arreglo = sizeof(arreglo1);
  
  int resultado_memcmp = memcmp(arreglo1, arreglo2, tamano_arreglo);
  printf("%d", resultado_memcmp);
  return 0;
}*/
