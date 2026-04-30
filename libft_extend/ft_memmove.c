/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 11:28:54 by ptran             #+#    #+#             */
/*   Updated: 2026/04/03 15:07:10 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy memory area handling overlaps.
 *
 * @param dest Destination memory.
 * @param src Source memory.
 * @param n Number of bytes to copy.
 * @return Pointer to @p dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
	{
		return (dest);
	}
	else if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}
