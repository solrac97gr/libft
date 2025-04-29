/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:00:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/29 12:00:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include the library header file that contains function prototypes */
#include "libft.h"

/*
 * ft_strrchr - Locate last occurrence of character in string
 * @s: The string to search in
 * @c: The character to locate (passed as an int, converted to char)
 *
 * Description: Returns a pointer to the last occurrence of the character c
 * in the string s. If c is '\0', it returns a pointer to the null terminator.
 * If c is not found, it returns NULL.
 *
 * Return: Pointer to the last matching character, or NULL if not found
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	
	/* Initialize pointer to NULL, indicating the character hasn't been found yet */
	last_occurrence = NULL;
	
	/* 
	 * Loop through each character of the string until we reach the null terminator.
	 * The loop condition *s checks if the current character is not '\0'.
	 */
	while (*s)
	{
		/* 
		 * Check if the current character matches the character we're looking for.
		 * We cast c to char to only compare the lowest 8 bits, as specified by strrchr.
		 */
		if (*s == (char)c)
			/* 
			 * If we found a match, update the pointer to the current position.
			 * This will be overwritten if we find another match later.
			 */
			last_occurrence = (char *)s;
		
		/* Move to the next character in the string */
		s++;
	}
	
	/* 
	 * Special case: If we're looking for the null terminator ('\0'),
	 * and we've reached the end of the string, return a pointer to it.
	 */
	if ((char)c == '\0')
		return ((char *)s); /* At this point, s points to the null terminator */
	
	/* Return the pointer to the last occurrence, or NULL if not found */
	return (last_occurrence);
}