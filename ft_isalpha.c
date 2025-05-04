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

#include "libft.h"

/**
 * @brief Checks if the character is alphabetic.
 *
 * This function tests whether a character is alphabetic (a letter).
 * In ASCII encoding, uppercase letters range from 65-90 ('A'-'Z')
 * and lowercase letters range from 97-122 ('a'-'z').
 *
 * @param c The character to check (passed as an int).
 * @return int Returns 1 if the character is alphabetic, 0 otherwise.
 */
int     ft_isalpha(int c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
                return (1);
        }
        return (0);
}
