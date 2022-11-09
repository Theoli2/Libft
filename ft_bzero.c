/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:20:57 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/09 02:29:20 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}