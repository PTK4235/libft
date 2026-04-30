/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:13:00 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:20:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two memory areas.
 *
 * @param mem1 First memory area.
 * @param mem2 Second memory area.
 * @param size Number of bytes to compare.
 * @return 0 if equal, non-zero indicating difference.
 */
int	ft_memcmp(const void *mem1, const void *mem2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)mem1)[i] != ((unsigned char *)mem2)[i])
		{
			return (((unsigned char *)mem1)[i] - ((unsigned char *)mem2)[i]);
		}
		i++;
	}
	return (0);
}
