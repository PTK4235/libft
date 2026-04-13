/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_piscine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:39:05 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:15:57 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

/**
 * @brief Converts string to integer (42 piscine variant)
 *
 * @param str String to convert
 * @return Converted integer value
 */
int	ft_atoi_piscine(const char *str)
{
	size_t		i;
	long long	neg;
	long long	ret;

	ret = 0;
	neg = 1;
	i = 0;
	if (str[0] == '\0')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg *= (-1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return ((int)(neg * ret));
}
