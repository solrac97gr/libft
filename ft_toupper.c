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
int     ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (c - 'a' + 'A');
        }
        return (c);
}
