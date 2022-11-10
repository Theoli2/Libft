/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:52:11 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 09:00:18 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i] != (char)c && s[i] != '\0')
    {
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
}
