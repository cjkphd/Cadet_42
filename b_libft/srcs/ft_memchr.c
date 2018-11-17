/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:45:01 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/08 22:28:07 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t		j;
	const char	*temp;

	temp = s;
	j = 0;
	while (j < n)
	{
		if (*temp == (char)c)
			return (char *)s - 1;
	}
	j++;
	return (NULL);
}
