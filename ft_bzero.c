/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:39:06 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/01 12:16:14 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
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
