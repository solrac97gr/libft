/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:35:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:35:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file to access necessary declarations and definitions */
#include "libft.h"

/* 
 * ft_bzero - Sets the first n bytes of memory area pointed to by s to zero
 * @s: Pointer to the memory area to be zeroed
 * @n: Number of bytes to be set to zero
 *
 * This function writes n zeroed bytes to the string s. If n is zero, ft_bzero
 * does nothing. It is a reimplementation of the standard C library bzero function.
 */
void	ft_bzero(void *s, size_t n)
{
	/* 
	 * Create a byte pointer 'p' initialized to the address 's'.
	 * We use unsigned char* because it guarantees we'll process the memory byte by byte,
	 * regardless of the actual type of the memory area pointed to by 's'.
	 */
	unsigned char	*p = s;

	/* 
	 * Loop through each byte of the memory area.
	 * n-- decrements n after checking its value, and the loop continues until n is 0.
	 */
	while (n--)
		/* 
		 * Set the current byte pointed to by p to 0, then increment p to point to the next byte.
		 * *p++ is a post-increment operation:
		 * 1. Dereference p (access the value at the memory location)
		 * 2. Assign 0 to that memory location
		 * 3. Increment p to point to the next byte
		 */
		*p++ = 0;
}
