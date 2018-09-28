/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:53:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/25 13:36:45 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

/*
** #include <stdio.h>
**
**int main()
**{
**	char test1[15] = "asdfasdf";
**	printf("%s\n", ft_strncpy(test1, "monster", 10));
**	printf("%s\n", strncpy(test1, "monster", 10));
**	return 0;
**}
*/
