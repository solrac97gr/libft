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

/* Include the library header file to access necessary declarations and
 * definitions */
#include "libft.h"

/*
 * ft_bzero - Sets the first n bytes of memory area pointed to by s to zero
 * @s: Pointer to the memory area to be zeroed
 * @n: Number of bytes to be set to zero
 *
 * This function writes n zeroed bytes to the string s. If n is zero, ft_bzero
 * does nothing. It is a reimplementation of the standard C library bzero
 * function.
 */
void    ft_bzero(void *s, size_t n)
{
        unsigned char   *p;

        p = s;
        while (n--)
                *p++ = 0;
}

