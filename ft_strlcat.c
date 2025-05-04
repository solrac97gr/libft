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

/* Include the library header file that contains function prototypes and
 * typedefs */
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
 * length of the string it tried to create (regardless of how much was actually
 * copied).
 */
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  dst_len;
        size_t  src_len;
        size_t  i;

        dst_len = 0;
        src_len = 0;
        while (dst_len < size && dst[dst_len] != '\0')
                dst_len++;
        while (src[src_len] != '\0')
                src_len++;
        if (dst_len >= size)
                return (size + src_len);
        i = 0;
        while (src[i] != '\0' && (dst_len + i + 1) < size)
        {
                dst[dst_len + i] = src[i];
                i++;
        }
        dst[dst_len + i] = '\0';
        return (dst_len + src_len);
}
