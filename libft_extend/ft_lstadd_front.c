/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:30:56 by ptran             #+#    #+#             */
/*   Updated: 2026/04/12 18:51:02 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add node to front of list.
 *
 * @param lst Pointer to list pointer.
 * @param new Node to add to front.
 */
void	ft_lstadd_front(t_list **lst, t_list *node)
{
	node->next = *lst;
	*lst = node;
}
