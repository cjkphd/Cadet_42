/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:26:39 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:31:50 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int		ft_voidprint(va_list ap)
{
	unsigned long	i;
	char			*s;

	ft_putstr("0x");
	i = va_arg(ap, unsigned long);
	s = ft_ultoa_base(i, 16);
	ft_putstr(s);
	return (ft_strlen(s) + 2);
}
