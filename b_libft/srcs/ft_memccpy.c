/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:56:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/02 14:07:44 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	while (n-- > 0)
	{
		if ((*here++ = *from++) == (char)c)
			return (here);
	}
	return (NULL);
}
