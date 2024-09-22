/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:39 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:27 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *ds, const char *sr, size_t dsv)
{
    size_t  i;
    size_t v;

    v = ft_strlen(sr);
    if (dsv < 1)
        return(v);
    i = 0;
    while (sr[i] != '\0' && i < (dsv - 1))
    {
        ds[i] = sr[i];
        i++;
    }
    ds[i] = '\0';
    return (v);
}