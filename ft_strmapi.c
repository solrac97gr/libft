/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:15:36 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 21:17:42 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Applies a function to each character of a string and returns a new
 * string.
 *
 * This function takes a string 's' and applies the function 'f' to each
 * character of 's', passing its index as the first argument. The result is
 * stored in a new string, which is returned. The original string remains
 * unchanged.
 *
 * @param s The input string.
 * @param f The function to apply to each character.
 * @return char* A new string with the results of applying 'f' to each character
 * of 's', or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
