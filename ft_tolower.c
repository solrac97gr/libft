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
int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (c - 'A' + 'a');
        }
        return (c);
}
