/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:43:09 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Counts how many substrings will be created
 *
 * @param s String to analyze
 * @param c Delimiter character
 * @return size_t Number of substrings
 */
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (count);
}

/**
 * @brief Gets the length of a word until the delimiter
 *
 * @param s String containing the word
 * @param c Delimiter character
 * @return size_t Length of the word
 */
static size_t	word_length(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/**
 * @brief Creates a copy of a word with a specific length
 *
 * @param src Source string
 * @param len Length of the word to copy
 * @return char* Newly allocated copy of the word, or NULL if allocation fails
 */
static char	*word_dup(const char *src, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = src[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * @brief Frees all previously allocated memory in case of error
 *
 * @param result Array of strings
 * @param count Index up to which to free
 */
static void	free_result(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

/**
 * @brief Splits a string into an array of substrings
 *
 * This function splits 's' using the character 'c' as a delimiter. The array
 * ends with a NULL pointer. Memory for the array and each substring is
 * dynamically allocated.
 *
 * @param s The string to be split
 * @param c The delimiter character
 * @return char** A newly allocated array of strings resulting from the split,
 *         or NULL if allocation fails
 */
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_length(s, c);
		result[i] = word_dup(s, len);
		if (!result[i])
		{
			free_result(result, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}
