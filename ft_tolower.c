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

#include "libft.h"

/**
 * @brief Convert uppercase letter to lowercase.
 *
 * This function converts an uppercase letter to the corresponding lowercase letter.
 * If c is an uppercase letter (A-Z), the function converts it to the corresponding
 * lowercase letter. If c is not an uppercase letter, it is returned unchanged.
 *
 * @param c The character to convert (passed as an int).
 * @return int The converted lowercase letter or the original character if it's not
 *            an uppercase letter.
 */
int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (c - 'A' + 'a');
        }
        return (c);
}
