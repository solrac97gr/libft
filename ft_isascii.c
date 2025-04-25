/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:40:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 20:40:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_isascii - Checks if the character is a valid ASCII character
 * @c: The character to check (passed as an int)
 *
 * This function tests whether a character is a valid ASCII character.
 * Valid ASCII characters are those with values between 0 and 127 inclusive.
 * Returns:
 * - 1 if the character is a valid ASCII character
 * - 0 if the character is not a valid ASCII character
 *
 * This is a recreation of the standard C library isascii function.
 */
int	ft_isascii(int c)
{
	/* 
	 * Check if the character value is within the valid ASCII range (0-127).
	 * The logical AND (&&) operator returns 1 only if both conditions are true.
	 */
	if (c >= 0 && c <= 127)
	{
		/* If the character is a valid ASCII character, return 1 to indicate success */
		return (1);
	}
	/* If the character is not a valid ASCII character, return 0 to indicate failure */
	return (0);
}
