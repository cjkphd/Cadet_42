/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:24:04 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/07 16:50:08 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isascii(int c)
{
	if (c >= 000 && c <= 0177)
		return (1);
	else
		return (0);
}

/*
** Why did I used octal set?
** To prove a point:
** The sets in ASCII are all same,
** The only difference is by it's base #.
** For example: 0 = 000, etc.
*/
