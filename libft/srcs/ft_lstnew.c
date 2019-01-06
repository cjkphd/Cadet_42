/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 13:41:55 by mamateo           #+#    #+#             */
/*   Updated: 2019/01/06 13:41:56 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(t_list) * content_size)))
	{
		if (content)
			(lst->content = (void *)malloc(content_size)) ?
				ft_memcpy(lst->content, content, content_size) :
				NULL;
		else
			lst->content = NULL;
		lst->content_size = lst->content ? content_size : 0;
		lst->next = NULL;
	}
	return (lst);
}
