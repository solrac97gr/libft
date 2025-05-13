/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:05:20 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:50:31 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy a string to a sized buffer.
 *
 * This function copies up to size - 1 characters from the NUL-terminated string
 * src to dst, NUL-terminating the result if size > 0. If size is 0, dst is not
 * touched.
 *
 * @param dst Destination buffer where the string will be copied.
 * @param src Source string to copy.
 * @param size Size of the destination buffer 
 * including space for null terminator.
 * @return size_t The total length of the string 
 * it tried to create (the length of
 * src), regardless of how much was actually copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
