/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:26 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:35:51 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *ds, const void *sr, size_t v)
{
	unsigned char	*d;
	unsigned char	*s;

	if (sr == NULL && ds == NULL)
		return (NULL);
	d = (unsigned char *)ds;
	s = (unsigned char *)sr;
	if (d >= s)
	{
		while (v--)
			d[v] = s[v];
	}
	else
		ft_memcpy(d, s, v);
	return (ds);
}
