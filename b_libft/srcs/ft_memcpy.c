/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:26:30 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/30 12:44:26 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	i = 0;
	while (i < n)
	{
		here[i] = from[i];
		i++;
	}
	return (dst);
}
