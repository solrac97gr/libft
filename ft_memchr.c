/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solrac97gr <solrac97gr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:20:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/30 23:13:52 by solrac97gr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}