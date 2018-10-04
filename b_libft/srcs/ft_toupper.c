/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:33:50 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/04 15:21:07 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
**#include <stdio.h>
**
**int main()
**{
**   	printf("%c\n", ft_toupper('m'));
**	printf("%c\n", ft_toupper('N'));
**	return 0;
**}
*/
