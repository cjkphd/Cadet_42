/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:30:51 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/02 19:15:03 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *)str + i);
	}
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*
**int		main(void)
**{
**	printf("%s\n", ft_strchr("poop", 'z'));
**	printf("%s\n", ft_strchr("poop", '\0'));
**	printf("%s\n", strchr("poop", 'z'));
**	printf("%s\n", strchr("poop", '\0'));
**	return (0);
**}
**if (str[i] == (char)c)
**return ((char *)&str[i]);
*/
