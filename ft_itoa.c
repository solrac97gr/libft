/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:56:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/05 18:56:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


static int get_len(long n)
{
    int	len;

    len = (n <= 0);
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

/**
 * @brief Convert a integer to an string.
 *
 * This function converts the integer 'n' to a string representation.
 *
 * @param n The integer to be converted.
 * @return char* A pointer to the newly allocated string representing the integer,
 *        or NULL if allocation fails. The string must be freed by the caller.
 */
char	*ft_itoa(int n)
{
    char	*str;
    int		len;
    long	num;

    num = n;
    if (num < 0)
        num = -num;
    len = get_len(n);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}




