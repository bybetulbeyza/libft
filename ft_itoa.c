/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 08:17:16 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/27 10:37:34 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

size_t	get_div(size_t len)
{
	size_t	div;

	div = 1;
	while (len > 1)
	{
		div *= 10;
		len--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	char	*arr;
	size_t	i;
	size_t	div;

	arr = malloc(ft_len(n)+ 1);
	if (!arr)
		return (NULL);
	div = get_div(ft_len(n));
	i = 0;
	if (n < 0)
	{
		arr[i] = '-';
		n *= -1;
		i++;
	}
	while (i < (ft_len(n)+ 1) && div > 0)
	{
		arr[i] = ((n / div) % 10) + '0';
		div /= 10;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
