/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:30:08 by ptran             #+#    #+#             */
/*   Updated: 2026/04/03 15:07:23 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search for a byte in memory.
 *
 * @param mem The memory to search.
 * @param c The byte to find.
 * @param size Number of bytes to search.
 * @return Pointer to the byte if found, NULL otherwise.
 */
void	*ft_memchr(const void *mem, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)mem)[i] == (unsigned char)c)
		{
			return ((void *)(mem + i));
		}
		i++;
	}
	return (NULL);
}
