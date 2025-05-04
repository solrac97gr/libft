/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:43:32 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 20:16:30 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_isdigit - Checks if the character is a digit
 * @c: The character to check (passed as an int)
 *
 * This function tests whether a character is a decimal digit (0-9).
 * Returns:
 * - 1 if the character is a digit
 * - 0 if the character is not a digit
 *
 * Note: In ASCII encoding, digits are represented by values 48-57 ('0'-'9').
 *
 * This is a recreation of the standard C library isdigit function.
 */
int     ft_isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        return (0);
}
