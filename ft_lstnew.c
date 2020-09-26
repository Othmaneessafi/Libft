/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:51:52 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/14 22:41:35 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	fresh = (t_list *)malloc(sizeof(t_list));
	if (fresh == NULL)
		return (NULL);
	if (content == NULL)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
		fresh->next = NULL;
	}
	else
	{
		fresh->content = (void *)malloc(sizeof(t_list));
		fresh->content = ft_strcpy(fresh->content, content);
		fresh->content_size = content_size;
		fresh->next = NULL;
	}
	return (fresh);
}
