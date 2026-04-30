/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:47:23 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:23:31 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate substring in string (limited length).
 *
 * @param str The string to search.
 * @param to_find The substring to find.
 * @param len Maximum length to search in @p str.
 * @return Pointer to substring if found, NULL otherwise.
 */
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	find_len;

	if (!str || !to_find)
		return ((char *)str);
	i = 0;
	find_len = ft_strlen(to_find);
	if (find_len == 0)
		return ((char *)str);
	while (len >= find_len && i < (len - find_len + 1) && str[i])
	{
		if (ft_strncmp(&((char *)str)[i], to_find, find_len) == 0)
			return (&((char *)str)[i]);
		i++;
	}
	return (NULL);
}
