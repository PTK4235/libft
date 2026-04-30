/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:57:26 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:33:01 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd);
static void	ft_putnbr_fd_aux(long long n, int fd);

/**
 * @brief Write an integer to a file descriptor.
 *
 * @param n The integer to write.
 * @param fd The file descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_fd_aux((long long)n, fd);
}

/**
 * @brief Recursively write integer digits to file descriptor.
 *
 * @param n Number to write (as long long for sign extension).
 * @param fd File descriptor to write to.
 */
static void	ft_putnbr_fd_aux(long long n, int fd)
{
	unsigned char	c;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd_aux(0 - n, fd);
		return ;
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd_aux(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}
