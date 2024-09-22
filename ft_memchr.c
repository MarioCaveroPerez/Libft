/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:18 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:32:23 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int x, size_t v)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	find;

	i = 0;
	s = (unsigned char *)str;
	find = (unsigned char)x;
	while (i < v)
	{
		if (s[i] == find)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
