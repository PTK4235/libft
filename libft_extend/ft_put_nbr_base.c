/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:51:05 by ptran             #+#    #+#             */
/*   Updated: 2026/04/13 19:33:09 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

static void	ft_putnbr_base_aux(long long nbr, char *base);
static int	check_base(char *str);

/**
 * @brief Outputs an integer in a given base
 *
 * @param nbr Number to output
 * @param base Base to convert to (e.g., "0123456789abcdef")
 * @return void
 */
void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_aux(-nbr, base);
	}
	else
		ft_putnbr_base_aux(nbr, base);
}

void	ft_putnbr_base_aux(long long nbr, char *base)
{
	char	rem;

	rem = base[nbr % ft_strlen(base)];
	if (check_base(base) == -1)
	{
		write(1, "\0", 1);
		return ;
	}
	else if (nbr < (long long)ft_strlen(base))
	{
		write(1, &rem, 1);
		return ;
	}
	ft_putnbr_base_aux(nbr / ft_strlen(base), base);
	write(1, &rem, 1);
}

int	check_base(char *str)
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
