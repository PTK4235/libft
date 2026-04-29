/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:23:41 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:34:03 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Copies src string to dest
 *
 * @param dest Destination buffer
 * @param src Source string
 * @return Pointer to dest
 */
char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
