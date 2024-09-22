/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:31 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:40:31 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	char	s;

	s = x;
	while (*str)
	{
		if (*str == s)
		{
			return ((char *) str);
		}
		str++;
	}
	if (s == '\0')
		return ((char *) str);
	return (0);
}
