/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:36 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:50:44 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *ds, const char *sr, size_t dssize)
{
	size_t	srv;
	size_t	dsv;
	size_t	i;

	srv = ft_strlen(sr);
	dsv = ft_strlen(ds);
	i = 0;
	if (dssize == 0)
		return (srv);
	if (dssize <= dsv)
		return (srv += dssize);
	else
		srv += dsv;
	while (sr[i] != '\0' && dsv < dssize - 1 && ds != sr)
	{
		ds[dsv] = sr[i];
		i++;
		dsv++;
	}
	ds[dsv] = '\0';
	return (srv);
}
