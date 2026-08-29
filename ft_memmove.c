/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 16:56:31 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/22 17:49:57 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*arr;
	const unsigned char	*arr1;
	size_t				i;	

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	arr = (unsigned char *) dest;
	arr1 = (const unsigned char *) src;
	if (arr > arr1)
	{
		while (n-- > 0)
			arr[n] = arr1[n];
	}
	else
	{
		while (i < n)
		{
			arr[i] = arr1[i];
			i++;
		}
	}
	return (dest);
}
