/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:40:11 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:18:08 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Finds first occurrence of substring in string
 *
 * @param str String to search in
 * @param to_find Substring to find
 * @return Pointer to substring or NULL
 */

char	*ft_strstr(char *str, char *to_find)
{
	size_t		i;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, ft_strlen(to_find)) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
