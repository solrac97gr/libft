/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:35:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:35:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and necessary typedefs */
#include "libft.h"

/*
 * ft_memcpy - Copy memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Description: Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap. If they do, use ft_memmove instead.
 *
 * Return: A pointer to dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	/* 
	 * Declare pointers for the destination and source memory areas.
	 * We use unsigned char pointers to ensure we're manipulating memory byte by byte.
	 */
	unsigned char	*d;
	const unsigned char	*s;

	/* 
	 * Handle edge case: if both pointers are NULL, return NULL.
	 * This is a safety check to prevent dereferencing NULL pointers.
	 */
	if (!dest && !src)
		return (NULL);
	
	/* 
	 * Cast the void pointers to unsigned char pointers for byte-by-byte operations.
	 * This is necessary because void pointers cannot be dereferenced directly.
	 */
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	
	/* 
	 * Copy n bytes from source to destination, one byte at a time.
	 * n-- decrements n after checking its value, and the loop continues until n is 0.
	 */
	while (n--)
		/* 
		 * Copy one byte from source to destination, then increment both pointers.
		 * *d++ = *s++ is a post-increment operation:
		 * 1. Dereference s (get the byte at the source memory location)
		 * 2. Dereference d (access the destination memory location)
		 * 3. Assign the source byte to the destination memory location
		 * 4. Increment both pointers to point to the next byte
		 */
		*d++ = *s++;
	
	/* Return the original destination pointer as required by the memcpy specification */
	return (dest);
}