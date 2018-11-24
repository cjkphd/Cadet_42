/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:04:41 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/23 18:30:09 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	s_size;
	size_t	d_size;
	size_t	i;

	i = 0;
	s_size = ft_strlen(src);
	d_size = ft_strlen(dst);
	if (d_size > n)
		return (n + s_size);
	while (src[i] != '\0' && d_size + i + 1 < n)
	{
		dst[d_size + i] = src[i];
		i++;
	}
	dst[d_size + i] = '\0';
	return (d_size + s_size);
}
