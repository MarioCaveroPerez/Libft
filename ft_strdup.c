/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyanez-m <dyanez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:33 by marioper          #+#    #+#             */
/*   Updated: 2024/09/22 11:41:03 by dyanez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*x;
	int		s;

	s = ft_strlen(str1);
	x = malloc(sizeof(char) * (s + 1));
	if (x == NULL)
		return (NULL);
	ft_memcpy(x, str1, s);
	x[s] = '\0';
	return (x);
}
