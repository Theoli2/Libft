/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:55:05 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/09 07:25:35 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (size = 0)
        return size;    
    i = 0;
    while (i < size && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    return ()
}