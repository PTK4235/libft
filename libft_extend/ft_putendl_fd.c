/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:18 by ptran             #+#    #+#             */
/*   Updated: 2026/03/31 19:46:19 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write a string followed by newline to file descriptor.
 *
 * @param s The string to write.
 * @param fd The file descriptor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, (unsigned char *) s++, 1);
	write(fd, "\n", 1);
}
