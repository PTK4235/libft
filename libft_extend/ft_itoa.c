/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 15:44:44 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:33:11 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static int	ft_digitcount(int x);
static void	ft_putnbr_str(char *ptr, long long nb, int idx);

/**
 * @brief Convert integer to string.
 *
 * @param n The integer to convert.
 * @return New string representation of @p n, or NULL on failure.
 */
char	*ft_itoa(int n)
{
	char	*res;
	int		dc;

	dc = ft_digitcount(n);
	res = (char *)malloc((dc + 1) * (sizeof(char)));
	if (res == NULL)
		return (NULL);
	res[dc] = '\0';
	ft_putnbr_str(res, (long long)n, dc - 1);
	return (res);
}

/**
 * @brief Recursively fill string with number digits.
 *
 * @param ptr String buffer to fill.
 * @param nb Number to convert (handles negative).
 * @param idx Current index in buffer.
 */
static void	ft_putnbr_str(char *ptr, long long nb, int idx)
{
	if (nb == 0)
	{
		ptr[idx] = '0';
		return ;
	}
	else if (nb < 0)
	{
		ptr[0] = '-';
		ft_putnbr_str(ptr, 0 - nb, idx);
		return ;
	}
	else if (nb / 10 > 0)
	{
		ft_putnbr_str(ptr, nb / 10, idx - 1);
	}
	ptr[idx] = nb % 10 + '0';
}

/**
 * @brief Count digits needed for integer representation.
 *
 * @param x The integer to count digits for.
 * @return Number of digits (including sign if negative).
 */
static int	ft_digitcount(int x)
{
	int	res;

	res = 1;
	if (x < 0)
		res++;
	while (x <= -10 || x >= 10)
	{
		x /= 10;
		res++;
	}
	return (res);
}
