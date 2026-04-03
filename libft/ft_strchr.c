/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:07:50 by ptk               #+#    #+#             */
/*   Updated: 2026/04/03 14:53:43 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate character in string.
 *
 * @param str The string to search.
 * @param c The character to find.
 * @return Pointer to @p c if found, NULL otherwise.
 */
char	*ft_strchr(const char *str, int c)
{

	while (*str && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char) c)
		return ((char *)str);
	return (NULL);
}
