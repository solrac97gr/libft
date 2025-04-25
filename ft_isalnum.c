/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:57:12 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 20:26:47 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file which contains function prototypes */
#include "libft.h"

/*
 * ft_isalnum - Checks if the character is alphanumeric
 * @c: The character to check (as an int)
 *
 * This function tests whether a character is alphanumeric (letter or digit).
 * Returns:
 * - 1 if the character is alphanumeric
 * - 0 if the character is not alphanumeric
 *
 * Note: In ASCII encoding:
 * - Uppercase letters: 65-90 ('A'-'Z')
 * - Lowercase letters: 97-122 ('a'-'z')
 * - Digits: 48-57 ('0'-'9')
 *
 * This function utilizes ft_isalpha and ft_isdigit to perform the actual check.
 */
int	ft_isalnum(int c)
{
	/* 
	 * Check if the character is a letter (using ft_isalpha) OR a digit (using ft_isdigit).
	 * Both ft_isalpha and ft_isdigit return 1 if the condition is true.
	 * The logical OR (||) operator returns 1 if either condition is true.
	 */
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
	{
		/* If the character is alphanumeric, return 1 to indicate success */
		return (1);
	}
	/* If the character is not alphanumeric, return 0 to indicate failure */
	return (0);
}
