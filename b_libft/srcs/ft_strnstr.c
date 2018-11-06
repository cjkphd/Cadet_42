/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:32:31 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/05 19:25:53 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	len = ft_strlen(*needle);
	if (!needle)
		return ((char *)haystack);
	while (((i + len) <= len) && *haystack)
	{
		if (ft_memcmp(haystack, needle, len) == 0)
			return (char *)(haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
