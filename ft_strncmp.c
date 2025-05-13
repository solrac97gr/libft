/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:23:04 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:43:34 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares at most the first n bytes of two strings.
 *
 * This function compares not more than n characters of the
 * strings s1 and s2. Characters that appear after a '\0'
 * character are not compared.
 *
 * @param s1 First string to be compared.
 * @param s2 Second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return int Returns an integer less than, equal to, or greater than zero
 *             if s1 is found, respectively, to be less than, to match,
 *             or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
