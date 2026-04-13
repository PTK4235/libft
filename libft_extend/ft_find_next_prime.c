/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:29:56 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:35:02 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Finds the next prime number >= nb
 *
 * @param nb Starting number
 * @return Next prime number
 */

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		if (nb % 2 != 0)
			nb += 2;
		else
			nb++;
	}
	return (nb);
}
