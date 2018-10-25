/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmateo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:18:52 by matmateo          #+#    #+#             */
/*   Updated: 2018/10/06 18:17:09 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

/*==========================================
int i = 0;
while (str[i] != '\0')
str[i]
i++;
==========================================

int	main(void)
{
 	ft_putstr("asdf");
 	ft_putstr(" qwerty\n");
 	ft_putstr("zxcv");
 	return 0;
}


**	ft_putchar(char c): will pull from a separate file
**	(*str): is an array of letters ie., str[];
**	'i' is given existence in the function
**	then 'i' is given a value of '0'
**	while (string[index] does NOT equal != to '\0')
**	ft_putchar(str[i]) will write a (string of an [array of characters])
**	'i' is a number + 1, and repeat function from the top
*/
