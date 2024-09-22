/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:23 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:35:22 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ds, const void *src, size_t v)
{
	unsigned int	i;

	if (src == NULL && ds == NULL)
		return (NULL);
	i = 0;
	while (i < v)
	{
		((char *)ds)[i] = ((const char *)src)[i];
		i++;
	}
	return (ds);
}
