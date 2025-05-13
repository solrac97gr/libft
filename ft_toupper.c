/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:48:56 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:55:42 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convert lowercase letter to uppercase.
 *

 * This function converts a lowercase letter to the
 * corresponding uppercase letter.
 * If c is a lowercase letter (a-z),
 * the function converts it to the corresponding
 * uppercase letter. If c is not a lowercase letter, it is returned unchanged.
 *
 * @param c The character to convert (passed as an int).
 * @return int The converted uppercase letter or 
 * the original character if it's not a lowercase letter.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}
