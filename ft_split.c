/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:39:55 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/15 19:59:19 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			counter++;
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

static char	**free_maker(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		--i;
	}
	free(split);
	return (NULL);
}

static int	len_word(char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s != c)
	{
		counter++;
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		start;
	int		end;

	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	start = 0;
	end = len_word((char *)s, c);
	while (i < count_words(s, c))
	{
		strs[i++] = ft_substr(s, start, len_word((char *)s, c));
		start = end;
		end = len_word((char *)s, c);
	}
	if (!strs)
		return (free_maker(strs, i));
	strs[i] = 0;
	return (strs);
}

int	main(void)
{
	char **split = ft_split("hola como estas  ", ' ');

	for (int i = 0; split[i]; i++)
		printf("%s\n", split[i]);
	return (0);
}
