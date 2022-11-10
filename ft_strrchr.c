/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:00:55 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 13:54:16 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen((char *)s);
    while (i > 0 && s[i] != (char)c)
        i--;
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
}
