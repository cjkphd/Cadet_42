/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octalprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:25:35 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:31:03 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int		ft_octalprint(va_list ap)
{
	unsigned int	i;
	char			*s;

	i = va_arg(ap, unsigned int);
	s = ft_ultoa_base(i, 8);
	ft_putstr(s);
	return (ft_strlen(s));
}
