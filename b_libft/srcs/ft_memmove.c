/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:37:46 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/30 19:39:39 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	if (src < dst)
	{
		dst += len;
		src += len;
		while (len--)
			*--dst = *--src;
	}
	else
		while (len--)
			*dst++ = *src++;
	return (here);
}
