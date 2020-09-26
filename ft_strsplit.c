/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:26:55 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/14 22:45:23 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_word(char *str, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			if (str[i + 1] == c)
				nb++;
			i++;
		}
		i++;
	}
	if (str[i] == '\0' && nb == 0)
		nb++;
	return (nb);
}

static int	num_lettre(char *str, int i, char c)
{
	int j;

	j = 0;
	while (str[i + j])
	{
		if (str[i + j + 1] == c)
		{
			j++;
			return (j);
		}
		j++;
	}
	return (j);
}

static void	fun1(char *str, char **ch, int m, char c)
{
	int		k;
	int		i;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			m = 0;
			ch[k] = (char *)malloc((num_lettre(str, i, c) + 1) * sizeof(char));
			while (m < num_lettre(str, i - m, c))
				ch[k][m++] = str[i++];
			ch[k++][m] = '\0';
		}
		if (str[i] == '\0')
			break ;
		i++;
	}
	ch[k] = 0;
}

char		**ft_strsplit(char const *s, char c)
{
	int		m;
	char	*str;
	char	**ch;

	m = 0;
	if (s)
	{
		str = (char *)s;
		ch = (char **)malloc((num_word(str, c) + 1) * sizeof(char *));
		if (ch == NULL)
			return (NULL);
		fun1(str, ch, m, c);
		return (ch);
	}
	return (NULL);
}
