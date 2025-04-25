/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 21:00:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_isprint - Checks if the character is printable
 * @c: The character to check (passed as an int)
 *
 * This function tests whether a character is a printable character,
 * which includes all visible characters and the space character.
 * Returns:
 * - 1 if the character is printable
 * - 0 if the character is not printable
 *
 * Note: In ASCII encoding, printable characters are represented by
 * values 32-126 (space through tilde '~').
 *
 * This is a recreation of the standard C library isprint function.
 */
int	ft_isprint(int c)
{
	/* 
	 * Check if the character is printable by testing if its ASCII value
	 * is between 32 and 126 inclusive (from space ' ' through tilde '~').
	 * The logical AND (&&) operator returns 1 only if both conditions are true.
	 */
	if (c >= 32 && c <= 126)
	{
		/* If the character is printable, return 1 to indicate success */
		return (1);
	}
	/* If the character is not printable, return 0 to indicate failure */
	return (0);
}