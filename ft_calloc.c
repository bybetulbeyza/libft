/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 08:03:10 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/25 08:35:13 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size != 0 && nmemb > (size_t) - 1 / (size))
		return (NULL);
	if (!nmemb || !size)
		return (malloc(1));
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero (arr, (nmemb * size));
	return (arr);
}
