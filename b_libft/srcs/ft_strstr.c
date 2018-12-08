/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:03:48 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:53:28 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*haystack;
	char	*needle;
	size_t	len;

	haystack = (char *)s1;
	needle = (char *)s2;
	len = ft_strlen(needle);
	if (len == 0)
		return (haystack);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return ((char *)NULL);
}
