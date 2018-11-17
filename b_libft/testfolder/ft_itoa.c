/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:10:17 by mamateo           #+#    #+#             */
/*   Updated: 2018/11/16 01:59:16 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnew(size_t size)
{
		  char *str;

		  str = (char *)malloc(sizeof(char) * size + 1);
		  if (!str)
					 return (NULL);
		  bzero(str, size + 1);
		  return (str);
}

static	int	count_digits(int n)
{
	int i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	int	len;
	char	*res;
	int	neg;

	neg = is_neg(n);
	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (neg)
		n = -n;
	len = neg + count_digits(n);
	res = strnew(len);
	if (!res)
		return (NULL);
	while (len--)
	{
		res[len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}

int 	main()
{
		  ft_itoa(-10);
		  printf("%s\n", ft_itoa(-10));
		  printf("%s\n", ft_itoa(' '))
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
		  return 0;
}
