/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:31:15 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:53:16 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
** ft_memalloc -- allocates and returns a “fresh” memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/
