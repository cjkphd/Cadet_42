/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:17:06 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/09 18:18:26 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*str;

	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (*s && (s[--len] == ' ' || s[--len] == '\t'))
	if (str != ft_strnew(len))
			return (NULL);
	str = ft_strncpy(str, s, len + 1);
	str[len + 1] = '\0';
	return (str);
}
