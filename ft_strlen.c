/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:00:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes and
 * typedefs */
#include "libft.h"

/*
 * ft_strlen - Calculate the length of a string
 * @s: The string whose length is to be calculated
 *
 * Description: Calculates the length of the string s, excluding the terminating
 * null byte ('\0'). This is a recreation of the standard C library strlen
 * function.
 *
 * Return: The number of bytes in the string s
 */
size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}
