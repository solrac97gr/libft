/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:05:20 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/23 19:38:51 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and typedefs */
#include "libft.h"

/*
 * ft_strlcpy - Copy a string to a sized buffer
 * @dst: Destination buffer where the string will be copied
 * @src: Source string to copy
 * @size: Size of the destination buffer including space for null terminator
 *
 * Description: Copies up to size - 1 characters from the NUL-terminated string src
 * to dst, NUL-terminating the result if size > 0. If size is 0, dst is not touched.
 *
 * Return: The total length of the string it tried to create (the length of src),
 * regardless of how much was actually copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	/* Variables to track the length of source string and iteration */
	size_t	src_len; /* Length of the source string */
	size_t	i;       /* Index for copying characters from src to dst */

	/* Initialize variables to 0 */
	src_len = 0;
	i = 0;
	
	/* 
	 * Calculate the length of the source string.
	 * This is needed to return the total length that would have been copied.
	 */
	while (src[src_len] != '\0')
		src_len++;
	
	/* 
	 * If size is 0, we can't copy anything and we shouldn't modify dst.
	 * Just return the source length as per strlcpy specification.
	 */
	if (size == 0)
		return (src_len);
	
	/* 
	 * Copy characters from src to dst until either:
	 * 1. We reach the end of src (null terminator), or
	 * 2. We've copied size-1 characters (leaving room for the null terminator)
	 */
	while (src[i] != '\0' && i < (size - 1))
	{
		/* Copy the current character from src to dst */
		dst[i] = src[i];
		/* Move to the next position in both strings */
		i++;
	}
	
	/* 
	 * Add the null terminator to the end of the copied string.
	 * This is safe because we only copied up to size-1 characters,
	 * ensuring there's room for the null terminator at position i.
	 */
	dst[i] = '\0';
	
	/* 
	 * Return the length of the source string, regardless of how much was copied.
	 * This allows the caller to know if truncation occurred (if src_len >= size).
	 */
	return (src_len);
}

