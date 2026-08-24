/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 16:38:20 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/22 17:48:51 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*arr;
	const unsigned char	*arr1;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	arr = (unsigned char *) dest;
	arr1 = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		arr[i] = arr1[i];
		i++;
	}
	return (dest);
}
