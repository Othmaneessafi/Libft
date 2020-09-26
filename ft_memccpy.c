/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:31:10 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/02 01:39:17 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*str;
	int				i;

	i = 0;
	dest = dst;
	str = (unsigned char *)src;
	while (i < (int)n)
	{
		dest[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
