/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:04:08 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:16:16 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Calculates nb raised to the power of power
 *
 * @param nb Base number
 * @param power Exponent
 * @return Result, 0 if power is negative
 */
int	ft_power(int nb, int power)
{
	int		ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
