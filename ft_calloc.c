/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioper <marioper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:27:57 by marioper          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:06 by marioper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t c, size_t s)
{
    void    *x;

    x == malloc(c * s);
    if (x == NULL)
        return (x);
    ft_bzero(x, s * c);
    return(x);
}