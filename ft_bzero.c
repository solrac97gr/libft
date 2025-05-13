/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:35:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:34:56 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first n bytes of memory area pointed to by s to zero.
 *
 * This function writes n zeroed bytes to the string s. If n is zero, ft_bzero
 * does nothing. It is a reimplementation of the standard C library bzero
 * function.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to be set to zero.
 * @return void This function does not return a value.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}
