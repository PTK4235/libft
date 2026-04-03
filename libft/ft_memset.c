/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:52:59 by ptk               #+#    #+#             */
/*   Updated: 2026/04/03 15:06:40 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill memory with a constant byte.
 *
 * @param s The memory to fill.
 * @param ch The byte value to set.
 * @param n Number of bytes to fill.
 * @return Pointer to @p s.
 */
void	*ft_memset(void *s, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = (unsigned char) ch;
		i++;
	}
	return (s);
}
