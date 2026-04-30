/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:14:28 by ptran             #+#    #+#             */
/*   Updated: 2026/04/02 14:34:49 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write a string to a file descriptor.
 *
 * @param s The string to write.
 * @param fd The file descriptor.
 */
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, (unsigned char *)s++, 1);
}
