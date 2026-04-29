/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:21 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:17:16 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Capitalizes first letter of each word in string
 *
 * @param str String to capitalize
 * @return Modified string
 */
char	*ft_strcapitalize(char *str)
{
	size_t		i;

	if (str[0] == '\0')
	{
		return (str);
	}
	str = ft_strlwr(str);
	str[0] = ft_toupper(str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_isalpha(str[i - 1]) && ft_isalpha(str[i]))
		{
			if (!ft_isdigit(str[i - 1]))
			{
				str[i] = ft_toupper(str[i]);
			}
		}
		i++;
	}
	return (str);
}
