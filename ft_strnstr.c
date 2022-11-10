/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:09:45 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 15:45:54 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
     
    if (!*little)
        return ((char*)big);
    i = ft_strlen((char *)little);
    while (*big != '\0' && len >= i )
    {
        if (*big == *little && ft_memcmp(big, little, i) == 0)
            return ((char *)big);
        big++;
        len--;
    }
    return (NULL);
}