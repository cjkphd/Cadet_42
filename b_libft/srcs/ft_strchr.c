/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:30:51 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/04 16:31:10 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *)str + i);
	}
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}