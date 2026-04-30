/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:54:52 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 17:22:30 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate a string.
 *
 * @param src The string to duplicate.
 * @return Pointer to new string, or NULL on allocation failure.
 */
char	*ft_strdup(const char *src)
{
	char	*ret;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	ret = malloc(sizeof(char) * i + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
