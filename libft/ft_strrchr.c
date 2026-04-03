/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:59:02 by ptran             #+#    #+#             */
/*   Updated: 2026/04/03 15:05:03 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate last occurrence of character in string.
 *
 * @param s The string to search.
 * @param c The character to find.
 * @return Pointer to last @p c if found, NULL otherwise.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (*s == (unsigned char) c)
	{
		last = (char *)s;
	}
	return (last);
}
