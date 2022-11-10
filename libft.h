/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 02:59:23 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/10 15:48:35 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <locale.h>
# include <stddef.h>
# include <stdlib.h>

void    ft_bzero(void *s, size_t n);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_strlen(char *str);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(char *s1, char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *nptr);

#endif
