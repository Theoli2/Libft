/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:01:09 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 05:44:30 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i=0;
    if (n == 0)
        return (dest);
    while (i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char*)(src + i);
        i++;
    }
    return (dest);
}
