/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:24:36 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 08:39:07 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    
    i = ft_strlen(dst);
    j = 0;
    if (size <= i)
        return (size + ft_strlen((char *)src));
    while (src[j] != '\0' && (i + j) < size - 1)
    {
        dst[i+j] = src[j];
        j++;
    }
    dst[i+j] = '\0';
    return (ft_strlen(dst) + ft_strlen((char *)&src[j]));
}