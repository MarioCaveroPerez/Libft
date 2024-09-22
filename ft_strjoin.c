/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:36:46 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 10:39:56 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *res;
    int x;
    int y;

    x = 0;
    y = 0;
    res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

    if (!res)
        return (NULL);
    while (s1[x])
        res[y++] = s1[x++];
    x = 0;
    while (s2[x])
        res[y++] = s2[x];
    res[y] = 0;
    return (res);
}