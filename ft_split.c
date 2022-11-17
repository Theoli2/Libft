/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:24:26 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/17 13:21:23 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	is_charset(char c, char *charset)
// {
// 	int	i;

// 	i = 0;
// 	while (charset[i])
// 	{
// 		if (c == charset[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// static int	countwords(char *str, char *charset)
// {
// 	int	words;
// 	int	i;

// 	i = 0;
// 	words = 0;
// 	while (str[i])
// 	{
// 		while (is_charset(str[i], charset) != 1 && str[i] != 0)
// 			i++;
// 		if (str[i] != 0)
// 			words++;
// 		while (is_charset(str[i], charset) == 1 && str[i] != 0)
// 			i++;
// 	}
// 	return (words);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	int		words;
	
// 	words = countwords(str, charset);
// 	tab = malloc ((words + 1) * sizeof(char *));
	
	
// }