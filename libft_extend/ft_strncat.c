/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:35:46 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:17:51 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Concatenates up to nb characters from src to dest
 *
 * @param dest Destination string
 * @param src Source string
 * @param nb Max characters to concatenate
 * @return Pointer to dest
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	j;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	j = 0;
	while (src[j] && j < nb)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}
