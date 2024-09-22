/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:50 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:45:57 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	int		i;
	char	s;

	s = x;
	i = ft_strlen(str);
	if (s == 0)
		return ((char *) &str[i]);
	while (i >= 0)
	{
		if (str[i] == s)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
