/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmateo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:18:52 by matmateo          #+#    #+#             */
/*   Updated: 2018/12/07 16:52:03 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

/*
** Experimental Alt: write(1, s, ft_strlen(s));
*/
