/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:56:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/30 12:46:32 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*here;
	const char	*from;

	here = dst;
	from = src;
	while (n-- > 0)
		if ((*here++ = *from++) == (char)c)
			return (here);
	return (NULL);
}

/*
** int	main()
**{
**	char test[15] = "monster";
**
**	printf("%s\n", ft_memccpy(test, "hello", 'e', 10));
**	return 0;
**}
*/
