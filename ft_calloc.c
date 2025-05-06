/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:35:00 by carloga2          #+#    #+#             */
/*   Updated: 2025/05/06 20:35:00 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

/**
 * @brief Allocates memory for an array of num elements of size bytes each
 *
 * This function allocates memory for an array of num elements, each of size bytes,
 * and initializes all bytes to zero. It combines the functionality of malloc and bzero.
 *
 * @param num The number of elements to allocate
 * @param size The size of each element in bytes
 * @return void* Returns a pointer to the allocated memory, or NULL in case of failure:
 *         - Returns NULL if num or size is SIZE_MAX
 *         - Returns NULL if the allocation fails
 *         - On success, returns pointer to zero-initialized allocated memory
 */
void	*ft_calloc(size_t num, size_t size)
{
    void	*ptr;

    if (num == SIZE_MAX || size == SIZE_MAX)
        return (NULL);
    ptr = malloc(num * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, num * size);
    return (ptr);
}
