/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:14 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:34:20 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Converts string to uppercase
 *
 * @param str String to convert
 * @return Modified string
 */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
