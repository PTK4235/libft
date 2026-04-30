/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:53:41 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:25:13 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trim/cut characters from string edges.
 *
 * @param s1 The string to trim.
 * @param set Characters to remove from edges.
 * @return New trimmed string, or NULL on failure.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (start < end && ft_strrchr(set, s1[end - 1]))
	{
		end--;
	}
	if (start >= end)
	{
		res = ft_calloc(1, 1);
	}
	else
		res = ft_substr(s1, start, end - start);
	return (res);
}
