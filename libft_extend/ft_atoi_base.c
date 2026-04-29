/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:57:55 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 14:13:35 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

static int		check_base(char *str);
static int		get_int(char *str, char *base, long long neg);

/**
 * @brief Converts string to integer in a given base
 *
 * @param str String to convert
 * @param base Base to convert from (e.g., "0123456789abcdef" for hex)
 * @return Converted integer value
 */
int ft_atoi_base(char *str, char *base)
{
	size_t		i;
	long long	neg;

	neg = 1;
	if (str[0] == '\0' || check_base(base) == -1)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	return (get_int(str + i, base, neg));
}

static int	check_base(char *str)
{
	size_t	i;
	size_t	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (-1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r') || str[i] == '-'
			|| str[i] == '+')
			return (-1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

static int	get_int(char *str, char *base, long long neg)
{
	size_t		i;
	size_t		j;
	size_t		len_base;
	size_t		len_str;
	long long	ret;

	ret = 0;
	i = 0;
	len_base = ft_strlen(base);
	len_str = ft_strlen(str);
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j++;
		if (base[j] == '\0')
			return (0);
		ret += (long long) (ft_power((int)len_base, (int)(len_str - i - 1)) * (int)j);
		i++;
	}
	return ((int) (neg * ret));
}


