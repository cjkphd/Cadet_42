/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:34:48 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/29 12:14:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
**int	main(void)
**{
**	char test[10] = "monster";
**
**	printf("%s\n", ft_memset(test, 'o', 3));
**	printf("%s\n", memset(test, 'o', 3));
**	return (0);
**}
*/
