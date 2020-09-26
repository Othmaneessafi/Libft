/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:17:21 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/08 23:00:32 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	int				j;
	unsigned char	*hay;
	unsigned char	*need;

	i = 0;
	hay = (unsigned char *)haystack;
	need = (unsigned char *)needle;
	if (need[i] == '\0')
		return ((char *)hay);
	while (hay[i])
	{
		j = 0;
		while (need[j] == hay[i + j])
		{
			j++;
			if (need[j] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (0);
}
