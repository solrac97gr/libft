/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solrac97gr <solrac97gr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:20:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/30 23:13:52 by solrac97gr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	 * ft_memchr - Locate the first occurrence of a character in memory
 * @s: Pointer to the memory area to be searched
 * @c: Character to search for (as an int)
 * @n: Number of bytes to search
 *
 * This function scans the first n bytes of the memory area pointed to by s
 * for the first occurrence of the character c. If c is found, a pointer to
 * the matching byte is returned. If c is not found, NULL is returned.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 */
void    *ft_memchr(const void *s, int c, size_t n)
{
        const unsigned char     *p;
        unsigned char           uc;

        p = (const unsigned char *)s;
        uc = (unsigned char)c;
        while (n--)
        {
                if (*p == uc)
                        return ((void *)p);
                p++;
        }
        return (NULL);
}
