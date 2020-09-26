/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:25:13 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/04 16:59:54 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	char	*str;

	if (s)
	{
		str = (char *)s;
		fresh = (char *)malloc((len + 1) * sizeof(char));
		if (fresh == NULL)
			return (NULL);
		ft_strncpy(fresh, str + start, len);
		fresh[len] = '\0';
		return (fresh);
	}
	return (NULL);
}
