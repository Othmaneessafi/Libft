/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:38:20 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/14 23:54:35 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	fresh = f(lst);
	fresh->next = f(lst->next);
	temp = fresh;
	fresh = fresh->next;
	lst = lst->next->next;
	while (lst != NULL)
	{
		fresh->next = f(lst);
		fresh = fresh->next;
		lst = lst->next;
	}
	fresh = NULL;
	return (temp);
}
