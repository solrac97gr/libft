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

#include "libft.h"

/**
 * @brief Checks if the character is a digit.
 *
 * This function tests whether a character is a decimal digit (0-9).
 * In ASCII encoding, digits are represented by values 48-57 ('0'-'9').
 *
 * @param c The character to check (passed as an int).
 * @return int Returns 1 if the character is a digit, 0 otherwise.
 */
int     ft_isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        return (0);
}
