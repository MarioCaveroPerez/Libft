/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:21 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:16 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t v)
{
    size_t              i;
    unsigned const char *s1;
    unsigned const char *s2;

    i = 0;
    s1 = (unsigned const char *)str1;
    s2 = (unsigned const char *)str2;
    while (i < v)
    {
        if (*s1 != *s2)
        {
            return ((int)(*s1 - *s2));
        }
        s1++;
        s2++;
        i++;
    }
    return (0);
}