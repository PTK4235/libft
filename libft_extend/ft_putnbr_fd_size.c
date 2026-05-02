/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:57:26 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 15:13:46 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extend.h"

static void	ft_putnbr_fd_size_aux(unsigned long long n, int fd, size_t *size_n);

/**
 * @brief Write an integer to a file descriptor.
 *
 * @param n The integer to write.
 * @param fd The file descriptor.
 */
size_t	ft_putnbr_fd_size(long long n, int fd)
{
	size_t size_n;

	size_n = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		size_n++;
		ft_putnbr_fd_size_aux((unsigned long long)(-n), fd, &size_n);
	}
	else
	{
		ft_putnbr_fd_size_aux((unsigned long long)n, fd, &size_n);
	}
	return (size_n);
}

/**
 * @brief Recursively write integer digits to file descriptor.
 *
 * @param n Number to write (as long long fsize_nor sign extension).
 * @param fd File descriptor to write to.
 * @param size_n size of the number base 10 (10**n + 1 * sign).
 */
static void	ft_putnbr_fd_size_aux(unsigned long long n, int fd, size_t *size_n)
{
	unsigned char	c;

	if (n == 0)
	{
		write(fd, "0", 1);
		(*size_n)++;
		return ;
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd_size_aux(n / 10, fd,size_n);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
	(*size_n)++;
}
