/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:43:42 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate last occurrence of character in string.
 *
 * This function returns a pointer to the last occurrence of the character c
 * in the string s. If c is '\0', it returns a pointer to the null terminator.
 * If c is not found, it returns NULL.
 *
 * @param s The string to search in.
 * @param c The character to locate (passed as an int, converted to char).
 * @return char* Pointer to the last matching character, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occurrence);
}
