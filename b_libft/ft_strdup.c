/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:09:53 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/25 13:40:37 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dupe;

	len = 0;
	while (s1[len] != '\0')
		len++;
	dupe = (char *)malloc(sizeof(char) * (len + 1));
	if (dupe != NULL)
	{
		len = 0;
		while (s1[len] != '\0')
		{
			dupe[len] = s1[len];
			len++;
		}
		dupe[len] = '\0';
	}
	return (dupe);
}

/*
** #include <stdio.h>
**
** int 	main(void)
** {
**	printf("%s\n", ft_strdup("poop"));
**	return (0);
**}
*/
