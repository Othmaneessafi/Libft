/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:51:35 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/18 21:48:45 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*str;

	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (str < dest)
	{
		while (len--)
			dest[len] = str[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
