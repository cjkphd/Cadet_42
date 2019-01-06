/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 13:23:28 by mamateo           #+#    #+#             */
/*   Updated: 2019/01/06 13:23:29 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*body;

	if (!lst || !f)
		return (NULL);
	body = f(lst);
	head = body;
	while ((lst = lst->next))
	{
		head->next = f(lst);
		head = head->next;
	}
	return (body);
}
