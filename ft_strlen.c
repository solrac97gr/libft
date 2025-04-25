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

/* Include the library header file that contains function prototypes and typedefs */
#include "libft.h"

/*
 * ft_strlen - Calculate the length of a string
 * @s: The string whose length is to be calculated
 *
 * Description: Calculates the length of the string s, excluding the terminating
 * null byte ('\0'). This is a recreation of the standard C library strlen function.
 *
 * Return: The number of bytes in the string s
 */
size_t	ft_strlen(const char *s)
{
	/* 
	 * Declare a variable i of type size_t to count the characters in the string.
	 * size_t is an unsigned integer type, which is appropriate for a length value
	 * that can never be negative.
	 */
	size_t	i;

	/* Initialize the counter to 0 */
	i = 0;
	
	/* 
	 * Iterate through the string until we reach the null terminator.
	 * For each character encountered, increment the counter i.
	 * The loop stops when we reach the null terminator ('\0'), which marks the end of the string.
	 */
	while (s[i] != '\0')
		i++;
	
	/* 
	 * Return the value of i, which represents the number of characters in the string.
	 * The null terminator is not counted as part of the string length.
	 */
	return (i);
}