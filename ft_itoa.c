/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 08:17:16 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/01 13:04:17 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*arr;
	long	nb;

	nb = n;
	len = ft_len(nb);
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	len--;
	if (nb == 0)
		arr[0] = '0';
	if (nb < 0)
	{
		arr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		arr[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (arr);
}
