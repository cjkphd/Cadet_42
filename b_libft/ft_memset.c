/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:34:48 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/25 13:37:48 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *temp;

	temp = (char)*b;
	if (len > 0)
		while (len--)
			*temp++ = (char)c;
	return (b);
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
