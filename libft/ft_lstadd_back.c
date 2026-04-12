/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:59:31 by ptran             #+#    #+#             */
/*   Updated: 2026/04/12 18:51:31 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add node to end of list.
 *
 * @param lst Pointer to list pointer.
 * @param new Node to add to back.
 */
void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*last;

	if (lst && *lst)
	{
		last = ft_lstlast(*lst);
		last->next = node;
	}
	else if (*lst == NULL)
	{
		*lst = node;
	}
}
