/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:24:33 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/03 14:16:57 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**modoru;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s || !c)
		return (0);
	modoru = ft_memalloc(ft_strlen(s) + 1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			modoru[j++] = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	modoru[j] = 0;
	return (modoru);
}
