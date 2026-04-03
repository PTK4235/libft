/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:30:22 by ptk               #+#    #+#             */
/*   Updated: 2026/04/02 14:12:35 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if a character is alphanumeric.
 * 
 * @param x The character to check.
 * @return 1 if @p x is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int x)
{
	if (ft_isalpha(x) || ft_isdigit(x))
	{
		return (1);
	}
	return (0);
}
