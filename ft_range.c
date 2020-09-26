/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 03:28:58 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/18 21:58:27 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		i;
	int		*ptr;

	i = 0;
	if (max > min)
	{
		i = max - min;
		ptr = (int *)malloc(i * sizeof(int));
		i = 0;
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
		return (ptr);
	}
	return (0);
}
