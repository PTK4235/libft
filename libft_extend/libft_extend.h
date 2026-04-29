/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_extend.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:23:10 by ptran             #+#    #+#             */
/*   Updated: 2026/04/20 14:50:15 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../libft/libft.h"

/* ========== Conversion Functions ========== */
int		ft_atoi_base(char *str, char *base);
int		ft_atoi_piscine(const char *str);

/* ========== Array Functions ========== */
void	ft_bubble_sort(int *tab, int size);
void	ft_rev_int_tab(int *tab, int size);

/* ========== Math Functions ========== */
int		ft_facto(int nb);
int		ft_find_next_prime(int nb);
int		ft_is_prime(int nb);
int		ft_power(int nb, int power);
int		ft_sqrt(int nb);

/* ========== Output Functions ========== */
void	ft_putnbr_base(int nbr, char *base);

/* ========== String Functions ========== */
char	*ft_strcat(char *dest, char *src);
char	*ft_strcapitalize(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strlwr(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
char	*ft_strpbrk(const char *str, const char *accept);

/* ========== Utility Functions ========== */
void	ft_swap(int *a, int *b);
