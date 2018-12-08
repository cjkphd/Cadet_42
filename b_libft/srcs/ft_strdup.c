/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:09:53 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:52:34 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dupe;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dupe = (char *)malloc(sizeof(char) * (i + 1));
	if (!dupe)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dupe[i] = s1[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
