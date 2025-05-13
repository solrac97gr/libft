/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:30:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:43:05 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill memory with a constant byte.
 *
 * This function fills the first n bytes of the memory area pointed to by s
 * with the constant byte c. This is a recreation of the standard C library
 * memset function.
 *
 * @param s Pointer to the memory area to be filled.
 * @param c Value to be set (converted to unsigned char).
 * @param n Number of bytes to be set.
 * @return void* A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t			i;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}
