/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:26:05 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/14 23:53:50 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	ptr = NULL;
	str = (char *)s;
	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while ((str[j] == ' ' || str[j] == '\t' ||
				str[j] == '\n') && str[j] != '\0')
		j++;
	while ((str[i] == ' ' || str[i] == '\t' ||
				str[i] == '\n' || str[i] == '\0') && i > j)
		i--;
	if (!(ptr = ft_strnew((i - j) + 1)))
		return (NULL);
	while (j <= i)
		ptr[k++] = str[j++];
	return (ptr);
}
