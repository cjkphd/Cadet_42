/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:25:25 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:30:58 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int		ft_nbrprint(va_list ap)
{
	int		i;
	int		j;
	char	*s;

	j = -1;
	i = va_arg(ap, int);
	if (i < 0)
	{
		if (i == -2147483648)
		{
			ft_putstr("-2147483648");
			return (11);
		}
		else
		{
			ft_putchar('-');
			s = ft_ultoa_base(i * j, 10);
			ft_putstr(s);
			return (ft_strlen(s) + 1);
		}
	}
	s = ft_ultoa_base(i, 10);
	ft_putstr(s);
	return (ft_strlen(s));
}
