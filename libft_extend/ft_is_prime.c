/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:10:57 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 12:15:19 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Checks if a number is prime
 *
 * @param nb Number to check
 * @return 1 if prime, 0 otherwise
 */
int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
	{
		if (i % 2 != 0)
			i += 2;
		else
			i++;
	}
	if (i == nb)
		return (1);
	return (0);
}
