/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:18 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:15 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int x, size_t v)
{
    size_t  i;
    unsigned char   *s;
    unsigned char   find;

    i = 0;
    s = (unsigned char *)str;
    find = (unsigned char)x;
    while (i < v)
    {
        if (s[i] == find)
            return(&s[i]);
        i++
    }
    return (NULL);
}