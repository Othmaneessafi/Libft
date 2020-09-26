/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:25:03 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/01 13:40:27 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*str;
	int				i;

	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < (int)n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
