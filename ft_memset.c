/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:38:33 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/09 03:05:58 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset (void *s, int c, size_t n)
{
    unsigned char *str;

    if (n == 0)
        return (s);
    str = (unsigned char *)s;
    while (n > 0)
    {
        *str = (unsigned char)c;
        str++;
        n--;
    }
    return (s);
}