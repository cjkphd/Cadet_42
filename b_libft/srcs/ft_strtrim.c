/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:17:06 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/08 22:20:33 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*new_str;

	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (*s && (s[--len] == ' ' || s[--len] == '\t'))
		if (!(new_str = ft_strnew(len)))
			return (NULL);
	new_str = ft_strncpy(new_str, s, len + 1);
	new_str[len + 1] = '\0';
	return (new_str);
}
