/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:10:23 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/23 20:10:23 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and typedefs */
#include "libft.h"

/*
 * ft_strlcat - Concatenate strings with size limitation
 * @dst: Destination buffer where the string will be appended
 * @src: Source string to append to destination
 * @size: Size of the destination buffer including space for null terminator
 *
 * Description: Appends the NUL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) - 1 bytes and NUL-terminate
 * the result, given that size > 0 and dst contains a NUL terminator.
 *
 * Return: The initial length of dst plus the length of src, indicating the
 * length of the string it tried to create (regardless of how much was actually copied).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	/* Variables to track the lengths of strings and iteration */
	size_t	dst_len; /* Length of the destination string */
	size_t	src_len; /* Length of the source string */
	size_t	i;       /* Index for copying characters from src to dst */

	/* Initialize lengths to 0 */
	dst_len = 0;
	src_len = 0;

	/* 
	 * Calculate the length of the destination string, limited by size.
	 * This loop finds either the null terminator or stops at size.
	 * If size is reached first, dst_len will equal size.
	 */
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	
	/* 
	 * Calculate the length of the source string.
	 * This is needed to return the total length that would have been created.
	 */
	while (src[src_len] != '\0')
		src_len++;

	/* 
	 * If dst_len is already >= size, the buffer is full or too small,
	 * so we can't append anything. Just return size + src_len.
	 */
	if (dst_len >= size)
		return (size + src_len);

	/* 
	 * Start appending characters from src to dst, ensuring we leave room
	 * for the null terminator by checking (dst_len + i + 1) < size.
	 * The +1 is for the null terminator we'll add later.
	 */
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		/* Copy the current character from src to the end of dst */
		dst[dst_len + i] = src[i];
		/* Move to the next character in src */
		i++;
	}

	/* 
	 * Add the null terminator to the end of the concatenated string.
	 * This is safe because we ensured there's room with the check (dst_len + i + 1) < size.
	 */
	dst[dst_len + i] = '\0';

	/* 
	 * Return the total length that would have been created,
	 * which is the initial length of dst plus the length of src.
	 */
	return (dst_len + src_len);
}