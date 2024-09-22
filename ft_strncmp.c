/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:44 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:30 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && (str1[i] || str2[i]))
    {
        if (str[i] != str2[i])
            return ((unsigned char *)str1)[i] - ((unsigned char *)str2)[i];
        else if (str1[i] == '\0')
            return (0);
        i++;
    }
    return (0);
}