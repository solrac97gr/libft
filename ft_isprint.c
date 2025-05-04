/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 21:00:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character is printable.
 *
 * This function tests whether a character is a printable character,
 * which includes all visible characters and the space character.
 * In ASCII encoding, printable characters are represented by
 * values 32-126 (space through tilde '~').
 *
 * @param c The character to check (passed as an int).
 * @return int Returns 1 if the character is printable, 0 otherwise.
 */
int     ft_isprint(int c)
{
        if (c >= 32 && c <= 126)
        {
                return (1);
        }
        return (0);
}
