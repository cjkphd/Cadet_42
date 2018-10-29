/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:26:26 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:31:35 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

char	*ft_ultoa_base(unsigned long num, int base)
{
	unsigned long	temp_nbr;
	char			*tab;
	char			*s;
	int				i;

	tab = "0123456789abcdef";
	temp_nbr = num;
	i = 1;
	while (temp_nbr /= base)
		i++;
	s = (char *)malloc(sizeof(*s) * (i));
	s[i] = '\0';
	while (i--)
	{
		s[i] = tab[(num % base)];
		num /= base;
	}
	free(s);
	return (s);
}
