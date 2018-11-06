/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:32:31 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/06 15:00:34 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	len = needle[i] != '\0';
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
