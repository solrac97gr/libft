/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:30:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:30:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and necessary typedefs */
#include "libft.h"

/*
 * ft_memset - Fill memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @c: Value to be set (converted to unsigned char)
 * @n: Number of bytes to be set
 *
 * Description: Fills the first n bytes of the memory area pointed to by s
 * with the constant byte c. This is a recreation of the standard C library
 * memset function.
 *
 * Return: A pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	/* 
	 * Declare a pointer to traverse the memory area byte by byte.
	 * We use unsigned char* to ensure we're manipulating memory one byte at a time.
	 */
	unsigned char	*ptr;
	
	/* 
	 * Convert the fill value (c) to an unsigned char.
	 * This ensures we only use the lower 8 bits of the value, as required by memset.
	 */
	unsigned char	value;
	
	/* Declare a counter variable for the loop */
	size_t			i;

	/* 
	 * Cast the void pointer s to an unsigned char pointer.
	 * This allows us to access the memory area byte by byte.
	 */
	ptr = (unsigned char *)s;
	
	/* 
	 * Convert the integer c to an unsigned char value.
	 * This ensures only the lowest 8 bits of c are used (as per memset specification).
	 */
	value = (unsigned char)c;
	
	/* Initialize the counter to 0 */
	i = 0;
	
	/* Loop through each byte of the memory area until we've processed n bytes */
	while (i < n)
	{
		/* 
		 * Set the current byte to the specified value.
		 * ptr[i] is equivalent to *(ptr + i), accessing the i-th byte of the memory area.
		 */
		ptr[i] = value;
		
		/* Increment the counter to move to the next byte */
		i++;
	}
	
	/* Return the original pointer as required by the memset specification */
	return (s);
}