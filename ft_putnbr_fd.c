/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:29:48 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/13 21:32:08 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the integer n to the file descriptor fd.
 *
 * This function converts the integer n to a string and writes it to the
 * specified file descriptor fd. If n is negative, a '-' sign is written
 * before the number.
 *
 * @param n The integer to output.
 * @param fd The file descriptor to write to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char			str[12];
	int				i;
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
	}
	else
		num = n;
	i = 0;
	if (num == 0)
		str[i++] = '0';
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (--i >= 0)
		write(fd, &str[i], 1);
}
