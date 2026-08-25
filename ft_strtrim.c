/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:02:59 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/25 15:10:50 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	is_in(char c, char const *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && is_in(s1[i], set))
		i++;
	j = (ft_strlen(s1));
	while (j > i && is_in(s1[j - 1], set))
		j--;
	arr = malloc(j - i + 1);
	if (!arr)
		return (NULL);
	k = 0;
	while (i < j)
	{
		arr[k] = s1[i];
		k++;
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
