/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:50:22 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 17:25:17 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy string with size limitation.
 *
 * @param dest Destination buffer.
 * @param src Source string.
 * @param size Size of destination buffer.
 * @return Length of source string @p src.
 */
size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t		i;

	i = 0;
	if (size <= 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
