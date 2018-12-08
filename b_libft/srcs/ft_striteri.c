/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:51:13 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:52:44 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	j;

	j = 0;
	if (s && f)
	{
		while (j < ft_strlen(s))
		{
			(*f)(j, &s[j]);
			j++;
		}
	}
}
