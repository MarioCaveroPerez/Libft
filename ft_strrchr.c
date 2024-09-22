/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:50 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:36 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int x)
{
    int     i;
    char    s;

    s = x;
    i = ft_strlen(str);
    if (s == 0)
        return ((char *) &str[i]);
    while (i >= 0)
    {
        if (str[i] == s)
            return ((char *)&str[i]);
        i--;
    }
    return(0);
}