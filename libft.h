/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmateo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 22:59:33 by matmateo          #+#    #+#             */
/*   Updated: 2018/10/02 20:22:39 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strlen(char *str);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *str, int c);

int		ft_isdigit(int c);

int		ft_toupper(int c);

void	*ft_memset(void *b, int c, size_t len);

int		ft_tolower(int c);

#endif
