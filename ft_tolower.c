/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:05:10 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/24 20:05:10 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_tolower - Convert uppercase letter to lowercase
 * @c: The character to convert (passed as an int)
 *
 * Description: If c is an uppercase letter (A-Z), the function converts it
 * to the corresponding lowercase letter. If c is not an uppercase letter,
 * it is returned unchanged.
 *
 * Note: In ASCII encoding:
 * - Uppercase letters: 65-90 ('A'-'Z')
 * - Lowercase letters: 97-122 ('a'-'z')
 * - The difference between uppercase and lowercase is 32
 *
 * Return: The converted lowercase letter or the original character if it's not 
 * an uppercase letter.
 */
int	ft_tolower(int c)
{
	/* 
	 * Check if the character is an uppercase letter by testing if it's within
	 * the range of 'A' (65) to 'Z' (90) in the ASCII table.
	 * We use character literals 'A' and 'Z' instead of their numeric values
	 * to make the code more readable and portable.
	 */
	if (c >= 'A' && c <= 'Z')
	{
		/* 
		 * Convert the uppercase letter to lowercase by adding the difference
		 * between lowercase and uppercase letters in the ASCII table.
		 * 
		 * The conversion formula works as follows:
		 * 1. Subtract 'A' (65) from c to get the position of the letter in the alphabet (0-25)
		 * 2. Add 'a' (97) to get the corresponding lowercase letter
		 * 
		 * For example, for 'C' (67):
		 * c - 'A' + 'a' = 67 - 65 + 97 = 2 + 97 = 99 = 'c'
		 */
		return (c - 'A' + 'a');
	}
	/* 
	 * If the character is not an uppercase letter, return it unchanged.
	 * This preserves the original value for all non-uppercase characters.
	 */
	return (c);
}