/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:11:41 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:53:31 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** ft_strdup
*/
