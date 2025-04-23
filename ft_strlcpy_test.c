/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:14:48 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/23 19:42:36 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	if_ft_strcopy_get_hello_copy_to_str2(void)
{
	char	s1[100];
	char	s2[100] = "hello";

	ft_strlcpy(s1, s2);
	strcpy(s1, s2);
	if (strcmp(s1, s2))
	{
		printf("[FAIL] if_ft_strcopy_get_hello_copy_to_str2");
	}
	else
	{
		printf("[PASS] if_ft_strcopy_get_hello_copy_to_str2");
	}
}

int	main(void)
{
	if_ft_strcopy_get_hello_copy_to_str2();
	return (0);
}