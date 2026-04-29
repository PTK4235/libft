/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:21:02 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:33:59 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Compares two strings
 *
 * @param s1 First string
 * @param s2 Second string
 * @return Difference between first differing characters, 0 if equal
 */
int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
