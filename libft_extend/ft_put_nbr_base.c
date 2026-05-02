/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:51:05 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 16:05:33 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

static void	ft_pb_aux(unsigned long long nbr, char *base, size_t *size);
static int	check_base(char *str);

/**
 * @brief Outputs an integer in a given base
 *
 * @param nbr Number to output
 * @param base Base to convert to (e.g., "0123456789abcdef")
 * @return size of the number base 10 (10**n + 1 * sign)
 */
size_t	ft_putnbr_base(long long nbr, char *base)
{
	size_t size;

	size = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_pb_aux((unsigned long long)-nbr, base, &size);
	}
	else
		ft_pb_aux(nbr, base, &size);
	return (size);
}

static void	ft_pb_aux(unsigned long long nbr, char *base, size_t *size)
{
	char	rem;
	size_t	len;

	len = ft_strlen(base);
	rem = base[nbr % len];
	if (check_base(base) == -1)
	{
		write(1, "\0", 1);
		(*size)++;
		return ;
	}
	else if (nbr < len)
	{
		write(1, &rem, 1);
		(*size)++;
		return ;
	}
	ft_putnbr_base_aux(nbr / len, base, size);
	write(1, &rem, 1);
	(*size)++;
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
