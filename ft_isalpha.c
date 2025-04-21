/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloga2 <carloga2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:24:38 by carloga2          #+#    #+#             */
/*   Updated: 2025/04/21 19:27:41 by carloga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isalpha check the char for validate if it is alphabetic
- if is alphabetic: 1024
- if is not alphabetic: 0
alphabetic char are between: 65-90 and 97 - 122
*/
int ft_isalpha(char c) {
    if ((c>=65 && c<=90) || (c>=97 && c<=122)) {
        return 1024;
    }
    return 0;
}
