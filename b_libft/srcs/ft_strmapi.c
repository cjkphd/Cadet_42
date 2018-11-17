/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:04:30 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/11 15:32:19 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*freshstr;
	int				i;
	int				j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		freshstr = (char *)malloc(j * sizeof(freshstr));
		while (s[i] != 0)
		{
			freshstr[i] = f(i, s[i]);
			i++;
		}
		return (freshstr);
	}
	return (NULL);
}
