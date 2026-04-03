/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:21:18 by ptran             #+#    #+#             */
/*   Updated: 2026/04/03 16:36:06 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char			**ft_split(char const *s, char c);
static char		**filler(char **res, const char *s, char c);
static size_t	ft_count_words(const char *str, char c);
static size_t	ft_strspn(const char *s, const char c);
static char		**free_all(char **buf, size_t cur);

/**
 * @brief Split string by delimiter.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return Array of strings, or NULL on failure.
 */
char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**res;

	if (s == NULL)
	{
		return (NULL);
	}
	count = ft_count_words(s, c);
	res = (char **) malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[count] = NULL;
	return (filler(res, s, c));
}

/**
 * @brief Fill result array with split substrings.
 *
 * @param res Result array to fill.
 * @param s Source string.
 * @param c Delimiter character.
 * @return Filled array on success, NULL on allocation failure.
 */
static char	**filler(char **res, const char *s, char c)
{
	size_t	cur;
	size_t	i;
	size_t	len_s;
	size_t	size_word;

	i = 0;
	cur = 0;
	len_s = ft_strlen(s);
	while (i < len_s)
	{
		size_word = ft_strspn(&s[i], c);
		if (size_word > 0)
		{
			res[cur] = ft_substr(s, i, size_word);
			if (res[cur] == NULL)
			{
				return (free_all(res, cur));
			}
			cur++;
		}
		i += size_word + 1;
	}
	return (res);
}

/**
 * @brief Count number of words in string separated by delimiter.
 *
 * @param str The string to count words in.
 * @param c The delimiter character.
 * @return Number of words in @p str.
 */
static size_t	ft_count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * @brief Calculate length of initial segment not containing delimiter.
 *
 * @param s The string to measure.
 * @param c The delimiter character.
 * @return Number of characters before @p c or end of string.
 */
static size_t	ft_strspn(const char *s, const char c)
{
	size_t	size;

	size = 0;
	while (s[size] && ((unsigned char *)s)[size] != (unsigned char) c)
	{
		size++;
	}
	return (size);
}

/**
 * @brief Free allocated strings and return NULL.
 *
 * @param buf Array of strings to free.
 * @param cur Number of allocated strings.
 * @return Always returns NULL for error handling.
 */
static char	**free_all(char **buf, size_t cur)
{
	size_t	i;

	i = 0;
	while (i < cur)
	{
		free(buf[i]);
		i++;
	}
	free(buf);
	return (NULL);
}
