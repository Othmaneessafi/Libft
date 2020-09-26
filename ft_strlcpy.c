/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:05:07 by oes-safi          #+#    #+#             */
/*   Updated: 2019/03/02 14:14:30 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*dest;
	unsigned char	*str;

	i = 0;
	j = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (size == 0)
		return (ft_strlen(src));
	if (dest && str)
	{
		while (str[i])
			i++;
		while (str[j] && j < (unsigned int)size - 1)
		{
			dest[j] = str[j];
			j++;
		}
		dest[j] = '\0';
		return (i);
	}
	return (0);
}
