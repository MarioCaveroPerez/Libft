/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:39 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:44:04 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *ds, const char *sr, size_t dsv)
{
	size_t	i;
	size_t	v;

	v = ft_strlen(sr);
	if (dsv < 1)
		return (v);
	i = 0;
	while (sr[i] != '\0' && i < (dsv - 1))
	{
		ds[i] = sr[i];
		i++;
	}
	ds[i] = '\0';
	return (v);
}
