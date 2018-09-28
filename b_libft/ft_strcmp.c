/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:59:29 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/25 13:39:28 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcmp will return 0 if the two strings are equal,
** <0 if str1 comes before str2 alphabetically,
** and >0 if str1 comes after str2 alphabetically.
*/

#include <libft.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int	lex;

	lex = 0;
	while (s1[lex] && s2[lex] && s1[lex] == s2[lex])
		lex++;
	return (s1[lex] - s2[lex]);
}

/*
**int		main()
**{
**	printf("%d\n", ft_strcmp("Hello", "earth"));
**	return 0;
**}
*/
