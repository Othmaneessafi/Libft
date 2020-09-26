/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:49:52 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/04 15:51:03 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *str;

	if (s)
	{
		str = (char *)s;
		while (*str)
		{
			ft_putchar_fd(*str, fd);
			str++;
		}
		ft_putchar_fd('\n', fd);
	}
}
