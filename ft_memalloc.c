/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:45:17 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/01 22:00:35 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void *)malloc(size * sizeof(*fresh));
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
