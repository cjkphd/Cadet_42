/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:48:49 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:51:03 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memalloc(size_t size)
{
	char	*a;

	a = malloc(size);
	if (!a)
		return (NULL);
	ft_bzero(a, size);
	return (a);
}
