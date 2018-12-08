/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:34:48 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:51:37 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;
	size_t	i;

	temp = (char *)b;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
