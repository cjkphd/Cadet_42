/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 11:24:37 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/16 11:25:10 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

static int		ft_chooseprint(va_list ap, char c)
{
	if (c == 'c')
		return (ft_charprint(ap));
	else if (c == 's')
		return (ft_strprint(ap));
	else if (c == 'd' || c == 'i')
		return (ft_nbrprint(ap));
	else if (c == 'u')
		return (ft_unsignedprint(ap));
	else if (c == 'o')
		return (ft_octalprint(ap));
	else if (c == 'x')
		return (ft_hexaprint(ap));
	else if (c == 'p')
		return (ft_voidprint(ap));
	else if (c == '%')
		return (ft_putchar(c));
	return (0);
}

int				b_printf(const char *format, ...)
{
	int			i;
	int			len;
	va_list		ap;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = len + ft_chooseprint(ap, format[i + 1]);
			i++;
		}
		else if (format[i] != '%')
			len = len + ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
