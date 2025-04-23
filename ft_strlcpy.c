/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:05:20 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/23 19:38:51 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ft_strcpy function copies string2, including the ending null character, to the location that is specified by string1.
*/
char *ft_strlcpy(char *string1, const char *string2)
{    
    while(*string2!='\0')
    {
        *string1++=*string2++;
    }
    *string1='\0';
    return string1;
}

