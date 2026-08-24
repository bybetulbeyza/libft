/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:32:44 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/22 18:59:41 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (size <= dst_l)
		return (src_l + size);
	while ((i + dst_l) < (size - 1) && src[i] != '\0')
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (src_l + dst_l);
}
