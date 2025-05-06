/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:15:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/06 21:15:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Duplicates a string
 *
 * This function allocates sufficient memory for a copy of the string s1,
 * does the copy, and returns a pointer to it. The pointer may subsequently
 * be used as an argument to the function free.
 *
 * @param s1 The string to duplicate
 * @return char* Returns a pointer to the duplicated string.
 *         Returns NULL if insufficient memory was available.
 */
char	*ft_strdup(const char *s1)
{
	char *dup;
	size_t len;

	len = ft_strlen(s1);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len + 1);
	return (dup);
}