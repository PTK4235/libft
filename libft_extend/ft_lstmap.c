/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:28:41 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:33:38 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create new list applying function to content.
 *
 * @param lst The list to map.
 * @param f Function to apply to each content.
 * @param del Function to free content on error.
 * @return New mapped list, or NULL on failure.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	new_list = NULL;
	current = NULL;
	while (lst)
	{
		current = ft_lstnew((f)(lst->content));
		if (current == NULL)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
