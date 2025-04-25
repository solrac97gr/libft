/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:50:52 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/25 21:14:46 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_if_a_is_found_return_pointer_to_position(void)
{
	char	s[5] = {1, 2, 3, 4, '\0'};
	char	*result;
	char	*expected;

	result = ft_strchr(s, 3);
	expected = strchr(s, 3);
	if (result != expected)
	{
		printf("[FAIL] if_a_is_found_return_pointer_to_position");
	}
	else
	{
		printf("[PASS] if_a_is_found_return_pointer_to_position");
	}
}

void	test_if_x__is_not_found_return_pointer_to_null(void)
{
	char	s[5] = {1, 2, 3, 4, '\0'};
	char	*result;
	char	*expected;

	result = ft_strchr(s, 9);
	expected = strchr(s, 9);
	if (result != expected)
	{
		printf("[FAIL] test_if_x__is_not_found_return_pointer_to_null");
	}
	else
	{
		printf("[PASS] test_if_x__is_not_found_return_pointer_to_null");
	}
}


int	main(void)
{
	test_if_a_is_found_return_pointer_to_position();
    test_if_x__is_not_found_return_pointer_to_null();
	return (0);
}