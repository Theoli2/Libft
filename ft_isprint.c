/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:32:46 by tlivroze          #+#    #+#             */
/*   Updated: 2022/11/08 22:34:59 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char c)
{
    if (c >= 32 && c <= 127)
        return (1);
    return (0);
}