/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:13:42 by mamateo           #+#    #+#             */
/*   Updated: 2018/09/29 12:16:35 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
**#include <stdio.h>
**
** int	main()
**{
**	printf("%c\n", ft_tolower('a');
**	printf("%c\n", ft_tolower('Z');
**	return (0);
**}
*/
