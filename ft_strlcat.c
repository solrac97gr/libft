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

#include "libft.h"

/*
* ft_strlcat appends the NUL-terminated string src to the end of dst.
* It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
* the result. Returns the initial length of dst plus the length of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;

	/* Get length of destination and source strings */
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;

	/* If dst_len >= size, no space to append anything */
	if (dst_len >= size)
		return (size + src_len);

	/* Append at most size - dst_len - 1 chars from src */
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}

	/* Ensure NULL termination */
	dst[dst_len + i] = '\0';

	return (dst_len + src_len);
}