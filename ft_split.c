/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:24:26 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/21 05:46:00 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*ft_strdupp(char *src, int len)
// {
// 	char	*dest;
// 	int		i;

// 	dest = malloc((len + 1) * sizeof(char));
// 	if (!dest)
// 		return (NULL);
// 	i = 0;
// 	while (src[i] && i < len)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (dest);
// }

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

// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	int		words;
// 	int		i;
// 	int		len;

// 	i = 0;
// 	len = 0;
// 	words = countwords((char *)s, c);
// 	printf("%d\n", words);
// 	tab = malloc ((words + 1) * sizeof(char *));
// 	while (i < words)
// 	{
// 		while (*s == c && s != 0)
// 			s++; // skip charset
// 		if (s != c)
// 		{
// 			while (*s != c && *s != 0)
// 			{
// 				len++;
// 				s++;
// 			}
// 		}
// 		*tab = ft_strdupp((char *)s, len);
// 		printf("str = |%s| len = %d\n", *tab, len);
// 		tab++;
// 		len = 0;
// 		i++;
// 	}
// 	*tab = 0;
// 	return (tab);
// }



static char	*ft_strdupp(char *src, char charset)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != charset && src[i])
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != charset && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*free_error(char **tab, int pos)
{
	int	i;

	i = 0;
	while (i <= pos)
		free(tab[i++]);
	return (free(tab), NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc ((countwords(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < countwords(s, c))
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		tab[i] = ft_strdupp(&s[j], c);
		if (!tab[i])
			return (free_error(tab, i));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	return (tab[i] = NULL, tab);
}


int main (int ac, char **av)
{
	(void)ac;
	char **strs;
	strs = ft_split(av[1], av[2][0]);
	for(int i = 0; strs[i]; i++)
		printf("%s\n", strs[i]);
	// ft_split("   Bonjour,    Benoit   a s das ", ' ');
	return (0);
}