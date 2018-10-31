/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmateo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 22:59:33 by matmateo          #+#    #+#             */
/*   Updated: 2018/10/30 19:42:10 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <locale.h>
# include <stdarg.h>
# include <strings.h>

void	ft_bzero(void *s, size_t n);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(char *str);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *str, int c);

int		ft_isdigit(int c);

int		ft_toupper(int c);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, void *src, size_t n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

int		ft_tolower(int c);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_swap(int *a, int *b);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isalpha(int c);

int		ft_atoi(const char *str);

#endif
