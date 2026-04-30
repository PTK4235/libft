/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:43:58 by ptran             #+#    #+#             */
/*   Updated: 2026/04/03 14:38:43 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate strings with size limitation.
 *
 * @param dest Destination buffer.
 * @param src Source string.
 * @param size Size of destination buffer.
 * @return Total length of concatenated string.
 */
size_t	ft_strlcat(char *dest, const char *restrict src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (i < size && dest[i])
		i++;
	if (size == 0)
		return (ft_strlen(src));
	j = 0;
	if (i >= size)
		return (i + ft_strlen(src));
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
