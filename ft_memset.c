/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:28 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:36:15 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int x, size_t v)
{
	unsigned char	*str;
	size_t			i;

	str = a;
	i = 0;
	while (i < v)
	{
		str[i] = (unsigned char)x;
		i++;
	}
	return (a);
}
