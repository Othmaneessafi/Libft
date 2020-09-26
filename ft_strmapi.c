/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:41:47 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/03 15:43:42 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*fresh;
	int		len;

	if (s)
	{
		len = 0;
		str = (char *)s;
		while (str[len])
			len++;
		fresh = (char *)malloc((len + 1) * sizeof(char));
		len = 0;
		if (fresh == NULL)
			return (0);
		len = 0;
		while (str[len])
		{
			fresh[len] = f(len, str[len]);
			len++;
		}
		fresh[len] = '\0';
		return (fresh);
	}
	return (NULL);
}
