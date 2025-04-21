/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:30:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 23:30:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memset - fill memory with a constant byte
- s: pointer to the memory area to be filled
- c: value to be set (converted to unsigned char)
- n: number of bytes to be set
- returns: a pointer to the memory area s
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t			i;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}