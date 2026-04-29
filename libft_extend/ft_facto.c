/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_facto.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:04:07 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:16:09 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Calculates factorial of a number
 *
 * @param nb Number to calculate factorial for
 * @return Factorial value, 0 if negative
 */
int	ft_facto(int nb)
{
	int		ret;

	ret = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		ret *= nb - 1;
		nb--;
	}
	return (ret);
}
