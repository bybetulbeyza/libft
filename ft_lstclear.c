/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 12:55:13 by betdemir          #+#    #+#             */
/*   Updated: 2026/08/28 14:49:37 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*n;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}
}
