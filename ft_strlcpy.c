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

#include "libft.h"

/*
* ft_strlcpy copies up to size - 1 characters from the NUL-terminated string src
* to dst, NUL-terminating the result. It returns the total length of the string
* it tried to create (the length of src).
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	/* Get length of source string */
	while (src[src_len] != '\0')
		src_len++;
	/* If size is 0, just return src length */
	if (size == 0)
		return (src_len);
	/* Copy at most size-1 characters to leave room for NULL terminator */
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	/* Ensure NULL termination */
	dst[i] = '\0';
	return (src_len);
}

