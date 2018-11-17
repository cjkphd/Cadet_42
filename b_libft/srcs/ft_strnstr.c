/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:32:31 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/10 17:40:20 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;

	i = 0;
	len = substr[i] != '\0';
	if (!substr)
		return ((char *)str);
	while (((i + len) <= len) && *str)
	{
		if (ft_memcmp(str, substr, len) == 0)
			return (char *)(str);
		str++;
		i++;
	}
	return (NULL);
}
