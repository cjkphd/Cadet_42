/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:53:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:53:08 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*poop;

	poop = dst;
	while (len--)
		if ((*dst++ = *src++) == '\0')
		{
			while (len--)
				*dst++ = '\0';
			return (poop);
		}
	return (poop);
}
