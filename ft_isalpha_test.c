/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:42:52 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 19:42:53 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	if_is_alpha_get_uppercase_return_1024(void)
{
	int	res;
	int	expected;

	res = ft_isalpha('B');
	expected = isalpha('B');
	if (res != expected)
	{
		printf("[FAIL] if_is_alpha_get_uppercase_return_1024\n");
	}
	else
	{
		printf("[PASS] if_is_alpha_get_uppercase_return_1024\n");
	}
}

void	if_is_alpha_get_lowercase_return_1024(void)
{
	int	res;
	int	expected;

	res = ft_isalpha('a');
	expected = isalpha('a');
	if (res != expected)
	{
		printf("[FAIL] if_is_alpha_get_lowercase_return_1024\n");
	}
	else
	{
		printf("[PASS] if_is_alpha_get_lowercase_return_1024\n");
	}
}

void	if_is_alpha_get_not_alpha_return_0(void)
{
	int	res;
	int	expected;

	res = ft_isalpha('^');
	expected = isalpha('^');
	if (res != expected)
	{
		printf("[FAIL] if_is_alpha_get_not_alpha_return_0\n");
	}
	else
	{
		printf("[PASS] if_is_alpha_get_not_alpha_return_0\n");
	}
}

int	main(void)
{
	if_is_alpha_get_uppercase_return_1024();
	if_is_alpha_get_lowercase_return_1024();
	if_is_alpha_get_not_alpha_return_0();
}