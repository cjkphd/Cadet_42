/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:45:01 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/20 16:03:59 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	const char	*temp;

	temp = s;
	while (n-- > 0)
	{
		if (*temp == (char)c)
			return (char *)temp;
		temp++;
	}
	return (NULL);
}
