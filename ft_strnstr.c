/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:46 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:45:37 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[x] && x < len)
	{
		while (haystack[x + y] == needle[y] && haystack[x + y] && x + y < len)
		{
			y++;
			if (needle[y] == 0)
				return ((char *) haystack + x);
		}
		x++;
		y = 0;
	}
	return (0);
}
