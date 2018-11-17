/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:26:17 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:31:30 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int		ft_strprint(va_list ap)
{
	char	*s;

	s = va_arg(ap, char*);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}
