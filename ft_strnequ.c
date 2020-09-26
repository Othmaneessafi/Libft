/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:01:42 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/03 16:06:30 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (s1 && s2)
	{
		i = 0;
		str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
		if (n == 0)
			return (1);
		while ((str1[i] && str2[i]) && (str1[i] == str2[i]) && i < (int)n - 1)
			i++;
		if ((str1[i] - str2[i]) == 0)
			return (1);
		return (0);
	}
	return (0);
}
