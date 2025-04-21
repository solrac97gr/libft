/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:57:12 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 20:26:47 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_isalnum check the char for validate if it is alphanumeric
- if is alphanumeric: 1
- if is not alphanumeric: 0
alphabetic char are between: 65-90 and 97 - 122
digit char are between: 48-57
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1024 || ft_isdigit(c) == 1)
	{
		return (1);
	}
	return (0);
}
