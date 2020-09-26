/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:17:42 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/02 14:24:17 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*hay;
	char	*need;

	i = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	if (need[i] == '\0')
		return (hay);
	while (hay[i] && i < (int)len)
	{
		j = 0;
		while ((need[j] == hay[i + j]) && (i + j) < (int)len)
		{
			j++;
			if (need[j] == '\0')
				return (hay + i);
		}
		i++;
	}
	return (0);
}
