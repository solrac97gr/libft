/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:57:12 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 20:42:21 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character is alphanumeric.
 *
 * This function tests whether a character is alphanumeric (letter or digit).
 * It utilizes ft_isalpha and ft_isdigit to perform the actual check.
 *
 * @param c The character to check (as an int).
 * @return int Returns 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
	{
		return (1);
	}
	return (0);
}
