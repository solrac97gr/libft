/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 22:15:13 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

static int	fill_words(char **result, const char *s, char c)
{
	size_t	len;
	size_t	word_i;

	word_i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			result[word_i] = ft_substr(s, 0, len);
			if (!result[word_i])
			{
				free_words(result, word_i);
				return (0);
			}
			word_i++;
			s += len;
		}
		else
			s++;
	}
	result[word_i] = NULL;
	return (1);
}

/**
 * @brief Splits a string into an array of strings based on a delimiter.
 *
 * This function takes a string and splits it into an array of strings,
 * using the specified delimiter character.
 * The resulting array is null-terminated.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of strings, or NULL if memory allocation fails.
 */
char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c))
		return (NULL);
	return (result);
}
