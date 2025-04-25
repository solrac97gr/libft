/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:24:38 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 19:57:56 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_isalpha - Checks if the character is alphabetic
 * @c: The character to check (passed as an int)
 *
 * This function tests whether a character is alphabetic (a letter).
 * Returns:
 * - 1 if the character is alphabetic (a letter)
 * - 0 if the character is not alphabetic
 *
 * Note: In ASCII encoding:
 * - Uppercase letters: 65-90 ('A'-'Z')
 * - Lowercase letters: 97-122 ('a'-'z')
 *
 * This is a recreation of the standard C library isalpha function.
 */
int	ft_isalpha(int c)
{
	/* 
	 * Check if the character is either:
	 * - An uppercase letter: ASCII values 65-90 ('A'-'Z')
	 * - A lowercase letter: ASCII values 97-122 ('a'-'z')
	 * 
	 * The logical OR (||) operator returns 1 if either condition is true.
	 */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		/* If the character is alphabetic, return 1 to indicate success */
		return (1);
	}
	/* If the character is not alphabetic, return 0 to indicate failure */
	return (0);
}
