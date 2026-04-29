/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:23:46 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:17:57 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Copies up to n characters from src to dest
 *
 * @param dest Destination buffer
 * @param src Source string
 * @param n Max characters to copy
 * @return Pointer to dest
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
