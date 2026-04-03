/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 09:10:09 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 21:16:57 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Apply function to each character of string.
 *
 * @param s The string to process.
 * @param f Function to apply (takes index and character).
 * @return New string with applied function, or NULL on failure.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*res;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	res = malloc((s_len + 1) * sizeof(char));
	if (!res)
	{
		return (NULL);
	}
	res[s_len] = '\0';
	while (i < s_len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
