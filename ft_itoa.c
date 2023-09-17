/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:48:45 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/17 23:20:03 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n <= -2147483648)
		return (11);
	else if (n > -2147483648 && n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*convert_int_to_string(int n)
{
	char			*digits;
	unsigned int	i;
	size_t			len_nb;
	int				digit;

	len_nb = number_len(n);
	digits = (char *)malloc(len_nb + 1);
	if (!digits)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		digits[i++] = '-';
	}
	while (n > 0)
	{
		digit = n % 10;
		digits[--len_nb] = digit + '0';
		n = n / 10;
		i++;
	}
	digits[i] = '\0';
	return (digits);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	else if (n > 2147483647)
		return (ft_strdup("2147483647"));
	return (convert_int_to_string(n));
}
