/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:11:29 by ptk               #+#    #+#             */
/*   Updated: 2026/04/02 14:18:34 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Set n bytes of zero in block of memory.
 *
 * @param mem The memory to zero.
 * @param n The number of bytes to zero.
 */
void	ft_bzero(void *mem, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)mem)[i] = '\0';
		i++;
	}
}
