/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:33:44 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/12 09:43:31 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    write
}

void    ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(fd, '-', 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchr_fd(nb + 48, fd);
		return;
	}
	else
		ft_putnbr_fd(nb / 10, fd);
	ft_putnbr_fd(nb % 10, fd);
}

// NOT SURE YET