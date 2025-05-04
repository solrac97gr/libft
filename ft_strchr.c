/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:50:52 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/25 21:06:36 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate character in string.
 *
 * This function returns a pointer to the first occurrence of the character c
 * in the string s. If c is '\0', it returns a pointer to the null terminator.
 * If c is not found, it returns NULL.
 *
 * @param s The string to search in.
 * @param c The character to locate (passed as an int, converted to char).
 * @return char* Pointer to the first matching character, or NULL if not found.
 */
char    *ft_strchr(const char *s, int c)
{
        while (*s)
        {
                if (*s == (char)c)
                        return ((char *)s);
                s++;
        }
        if ((char)c == '\0')
                return ((char *)s);
        return (0);
}
