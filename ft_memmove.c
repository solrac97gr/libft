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

/* Include the library header file that contains function prototypes and necessary typedefs */
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
void	*ft_memmove(void *dest, const void *src, size_t n)
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
	 * If the destination address is less than the source address,
	 * it's safe to copy from the beginning, as there's no risk of overwriting
	 * data that hasn't been copied yet.
	 */
	if (d < s)
	{
		/* Copy forward (like memcpy) when dest is before src */
		while (n--)
			/* 
			 * Copy one byte from source to destination, then increment both pointers.
			 * Post-increment operation: copy first, then move to next byte.
			 */
			*d++ = *s++;
	}
	/* 
	 * If the destination address is greater than the source address,
	 * copy from the end to avoid overwriting source data before it's been copied.
	 * This handles the case where memory regions overlap.
	 */
	else if (d > s)
	{
		/* Copy backward when dest is after src (to handle overlap) */
		/* 
		 * Position pointers at the end of their respective memory areas.
		 * This is n-1 because array indices are 0-based (the last byte is at position n-1).
		 */
		d += n - 1;
		s += n - 1;
		while (n--)
			/* 
			 * Copy one byte from source to destination, then decrement both pointers.
			 * Post-decrement operation: copy first, then move to previous byte.
			 */
			*d-- = *s--;
	}
	/* 
	 * If d == s, the source and destination are the same, so no copying is needed.
	 * The function still returns the destination pointer in this case.
	 */
	
	/* Return the original destination pointer as required by the memmove specification */
	return (dest);
}