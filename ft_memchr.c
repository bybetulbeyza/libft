/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:34:10 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/25 01:00:39 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*arr;

	i = 0;
	arr = (const unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return ((void *)&arr[i]);
		i++;
	}
	return (NULL);
}
