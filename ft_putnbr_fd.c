/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:39:08 by oes-safi          #+#    #+#             */
/*   Updated: 2019/04/04 15:45:43 by oes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214748364, fd);
		ft_putchar_fd(8 + '0', fd);
	}
	else
	{
		if (n < 0 && n != -2147483648)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n <= 9)
		{
			ft_putchar_fd(n + '0', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}
