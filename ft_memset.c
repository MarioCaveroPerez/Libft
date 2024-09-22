/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:28 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:21 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *a, int x, size_t v)
{
    unsigned char    *str;
    size_t  i;

    str = a;
    i = 0;
    while(i < v)
    {
        str[i] = (unsigned char)x;
        i++;
    }
    return (a);
}