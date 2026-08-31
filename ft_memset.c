/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:25:37 by betdemir          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/08/30 14:03:56 by betdemir         ###   ########.fr       */
=======
/*   Updated: 2026/08/22 12:35:28 by betdemir         ###   ########.fr       */
>>>>>>> a5d768b1cf806c5c78ad5c528bd8e95cad3037db
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *) s;
	while (i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
