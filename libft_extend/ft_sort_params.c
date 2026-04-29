/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:10:15 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:23:24 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Program that sorts and displays arguments
 *
 * @param argc Argument count
 * @param argv Argument vector
 * @return 0 on success
 */
int	main(int argc, char **argv)
{
	int		i;
	char	**tab;

	tab = ++argv;
	ft_bubble_sort((int *) *tab, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		write(1, tab[i], ft_strlen(tab[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
