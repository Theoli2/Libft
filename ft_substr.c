/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 03:15:06 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/17 13:20:22 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*result;
    size_t 	i;


    i = 0;
    if (!s || !len || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
    result = malloc(len + 1);
	if (!result)
        return (NULL);
    while (i < len )//&& i + start < ft_strlen(s))
    {
        result[i] = s[start + i];       
        i++;
    }
    result[i] = '\0';
    return (result);
}