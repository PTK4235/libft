/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:41:44 by ptran             #+#    #+#             */
/*   Updated: 2026/04/20 14:50:47 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

char *ft_strpbrk(const char *str, const char *accept)
{
	if (!str || !accept)
	{
		return (NULL);
	}
	while (*str)
	{
		if (ft_strchr(accept,*str))
		{
			return (char *)(str);
		}
		str++;
	}
	return (NULL);
}