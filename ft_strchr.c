/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:31 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:22 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int x)
{
    char    s;

    s = x;
    while(*str)
    {
        if (*str == s)
        {
            return ((char *) str);
        }
        str++;
    }
    if (s == '\0')
        return ((char *) str);
    return (0);
}