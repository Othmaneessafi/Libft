/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:06:28 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/01 13:50:10 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = (char *)s2;
	while (s1[j])
		j++;
	while (str2[i] && i < (int)n)
	{
		s1[j] = str2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
