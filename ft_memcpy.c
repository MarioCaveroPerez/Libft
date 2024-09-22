/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:23 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:18 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *ds, const void *src, size_t v)
{
    unsigned int    i;

    if (src == NULL && ds == NULL)
        return (NULL);

    i = 0;
    while (i < v)
    {
        ((char *)ds)[i] = ((const char *)src[i]);
        i++;
    }
    return(ds);
}