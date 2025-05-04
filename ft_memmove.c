/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:35:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:35:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and
 * necessary typedefs */
#include "libft.h"

/*
 * ft_memmove - Copy memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Description: Copies n bytes from memory area src to memory area dest.
 * Unlike ft_memcpy, ft_memmove handles memory areas that overlap properly.
 *
 * Return: A pointer to dest
 */
void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char           *d;
        const unsigned char     *s;

        if (!dest && !src)
                return (NULL);
        d = (unsigned char *)dest;
        s = (const unsigned char *)src;
        if (d < s)
        {
                while (n--)
                        *d++ = *s++;
        }
        else if (d > s)
        {
                d += n - 1;
                s += n - 1;
                while (n--)
                        *d-- = *s--;
        }
        return (dest);
}
