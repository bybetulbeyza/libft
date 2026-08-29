/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:39:06 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/22 16:36:59 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *) s;
	while (i <= n)
	{
		arr[i] = 0;
		i++;
	}
}
