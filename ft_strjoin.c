/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 22:17:12 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Joins two strings together
 *
 * This function allocates and returns a new string, which is the result
 * of the concatenation of 's1' and 's2'.
 *
 * @param s1 The first string
 * @param s2 The second string that will be concatenated to s1
 * @return char* The new concatenated string, or NULL if allocation fails
 */
static char	*allocate_result(size_t len_s1, size_t len_s2)
{
	return ((char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1)));
}

static void	copy_strings(char *result, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = allocate_result(len_s1, len_s2);
	if (!result)
		return (NULL);
	copy_strings(result, s1, s2);
	return (result);
}
