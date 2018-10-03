/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:59:29 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/03 12:39:47 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcmp will return 0 if the two strings are equal,
** <0 if str1 comes before str2 alphabetically,
** and >0 if str1 comes after str2 alphabetically.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
**int		main()
**{
**	printf("%d\n", ft_strcmp("Hello", "earth"));
**	return 0;
**}
*/
