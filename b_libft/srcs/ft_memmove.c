/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:37:46 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/05 13:14:59 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	if (from < here)
	{
		here += len;
		from += len;
		while (len--)
			*--here = *--from;
	}
	else
		while (len--)
			*here++ = *from++;
	return (here);
}
