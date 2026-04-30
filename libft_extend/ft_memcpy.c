/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:17:07 by ptk               #+#    #+#             */
/*   Updated: 2026/04/03 15:06:58 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy memory area.
 *
 * @param dest Destination memory.
 * @param src Source memory.
 * @param n Number of bytes to copy.
 * @return Pointer to @p dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
