/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/05 10:00:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate a substring in a string, searching not more than len characters.
 *
 * This function locates the first occurrence of the null-terminated string
 * needle in the string haystack, searching not more than len characters.
 * Characters that appear after a '\0' character are not searched.
 *
 * @param haystack String to be searched.
 * @param needle Substring to search for in haystack.
 * @param len Maximum number of characters to search.
 * @return char* If needle is an empty string, haystack is returned; if needle
 *               is not found, NULL is returned; otherwise a pointer to the
 *               first character of the first occurrence of needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}