/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:07:59 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:33:22 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Program that displays arguments in reverse order
 *
 * @param argc Argument count
 * @param argv Argument vector
 * @return 0 on success
 */
int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
