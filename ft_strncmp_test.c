/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:25:04 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/30 14:25:04 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// Test case 1: Equal strings
	char	*s1 = "Hello";
	char	*s2 = "Hello";
	int		n = 5;
	
	printf("Test 1: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 2: Different strings
	s1 = "Hello";
	s2 = "World";
	n = 5;
	
	printf("Test 2: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 3: Partial comparison (n less than string length)
	s1 = "Hello";
	s2 = "Helpful";
	n = 3;
	
	printf("Test 3: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 4: Empty string comparison
	s1 = "";
	s2 = "";
	n = 5;
	
	printf("Test 4: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 5: One empty string
	s1 = "Hello";
	s2 = "";
	n = 5;
	
	printf("Test 5: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 6: n = 0
	s1 = "Hello";
	s2 = "World";
	n = 0;
	
	printf("Test 6: Compare \"%s\" and \"%s\" with n=%d\n", s1, s2, n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	// Test case 7: Compare with special characters
	s1 = "Hello\200";
	s2 = "Hello\0";
	n = 6;
	
	printf("Test 7: Compare special characters with n=%d\n", n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n));
	
	return (0);
}