/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:24:26 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/19 01:41:24 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdupp(char *src, int len)
{
	char	*dest;
	int		i;

	dest = malloc(len + 1 * sizeof(char));
	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static int	countwords(char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i + 1] == c || str[i + 1] == 0) && str[i] != c)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;
	int		len;

	i = 0;
	len = 0;
	words = countwords((char *)s, c);
	tab = malloc ((words + 1) * sizeof(char *));
	while (i < words)
	{
		while (*s == c && s != 0)
			s++;
		if (*s != c)
		{
			while (*s != c && s != 0)
				len++;
		}
		*tab = ft_strdupp((char *)s, len);
		tab++;
		len = 0;
	}
	*tab = 0;
	return (tab);
}