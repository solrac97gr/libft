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

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_strchr - Locate character in string
 * @s: The string to search in
 * @c: The character to locate (passed as an int, converted to char)
 *
 * Description: Returns a pointer to the first occurrence of the character c
 * in the string s. If c is '\0', it returns a pointer to the null terminator.
 * If c is not found, it returns NULL.
 *
 * Return: Pointer to the first matching character, or NULL if not found
 */
char	*ft_strchr(const char *s, int c)
{
	/* 
	 * Loop through each character of the string until we reach the null terminator.
	 * The loop condition *s checks if the current character is not '\0'.
	 */
	while (*s)
	{
		/* 
		 * Check if the current character matches the character we're looking for.
		 * We cast c to char to only compare the lowest 8 bits, as specified by strchr.
		 */
		if (*s == (char)c)
			/* 
			 * If we found a match, return a pointer to the current position in the string.
			 * We cast the const char* to char* to match the function's return type.
			 */
			return ((char *)s);
		
		/* Move to the next character in the string */
		s++;
	}
	
	/* 
	 * Special case: If we're looking for the null terminator ('\0'),
	 * and we've reached the end of the string, return a pointer to it.
	 */
	if ((char)c == '\0')
		return ((char *)s); /* At this point, s points to the null terminator */
	
	/* If the character was not found in the string, return NULL (0) */
	return (0);
}
