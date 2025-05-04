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

#include "libft.h"

/**
 * @brief Checks if the character is a valid ASCII character.
 *
 * This function tests whether a character is a valid ASCII character.
 * Valid ASCII characters are those with values between 0 and 127 inclusive.
 *
 * @param c The character to check (passed as an int).
 * @return int Returns 1 if the character is a valid ASCII character, 0 otherwise.
 */
int     ft_isascii(int c)
{
        if (c >= 0 && c <= 127)
        {
                return (1);
        }
        return (0);
}
