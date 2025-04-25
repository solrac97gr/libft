/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:48:56 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/24 19:48:56 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_toupper - Convert lowercase letter to uppercase
 * @c: The character to convert (passed as an int)
 *
 * Description: If c is a lowercase letter (a-z), the function converts it
 * to the corresponding uppercase letter. If c is not a lowercase letter,
 * it is returned unchanged.
 *
 * Note: In ASCII encoding:
 * - Uppercase letters: 65-90 ('A'-'Z')
 * - Lowercase letters: 97-122 ('a'-'z')
 * - The difference between uppercase and lowercase is 32
 *
 * Return: The converted uppercase letter or the original character if it's not 
 * a lowercase letter.
 */
int	ft_toupper(int c)
{
	/* 
	 * Check if the character is a lowercase letter by testing if it's within
	 * the range of 'a' (97) to 'z' (122) in the ASCII table.
	 * We use character literals 'a' and 'z' instead of their numeric values
	 * to make the code more readable and portable.
	 */
	if (c >= 'a' && c <= 'z')
	{
		/* 
		 * Convert the lowercase letter to uppercase by adding the difference
		 * between uppercase and lowercase letters in the ASCII table.
		 * 
		 * The conversion formula works as follows:
		 * 1. Subtract 'a' (97) from c to get the position of the letter in the alphabet (0-25)
		 * 2. Add 'A' (65) to get the corresponding uppercase letter
		 * 
		 * For example, for 'c' (99):
		 * c - 'a' + 'A' = 99 - 97 + 65 = 2 + 65 = 67 = 'C'
		 */
		return (c - 'a' + 'A');
	}
	/* 
	 * If the character is not a lowercase letter, return it unchanged.
	 * This preserves the original value for all non-lowercase characters.
	 */
	return (c);
}
