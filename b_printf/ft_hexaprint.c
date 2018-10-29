/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:25:07 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:30:47 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int		ft_hexaprint(va_list ap)
{
	unsigned int	i;
	char			*s;

	i = va_arg(ap, unsigned int);
	s = ft_ultoa_base(i, 16);
	ft_putstr(s);
	return (ft_strlen(s));
}
