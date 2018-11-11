/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:10:17 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/11 15:23:49 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_nblen(long long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			neg;
	long long	num;

	neg = (n >= 0) ? 0 : 1;
	num = n;
	num = (neg) ? -num : num;
	len = (neg) ? ft_nblen(num) + 1 : ft_nblen(num);
	if ((str = ft_strnew(len)) == 0)
		return (0);
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (neg)
		str[0] = '-';
	str[len] = '\0';
	while (len-- > neg)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
