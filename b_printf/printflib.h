/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:33:53 by mamateo           #+#    #+#             */
/*   Updated: 2018/10/26 10:34:15 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		b_printf(const char *s, ...);
int		ft_charprint(va_list ap);
int		ft_hexaprint(va_list ap);
int		ft_nbrprint(va_list ap);
int		ft_octalprint(va_list ap);
int		ft_putchar(char c);
int		ft_strlen(const char *s);
int		ft_strprint(va_list ap);
int		ft_unsignedprint(va_list ap);
int		ft_voidprint(va_list ap);
char	*ft_ultoa_base(unsigned long num, int base);
void	ft_putstr(const char *s);

#endif
