/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:01:04 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/17 17:35:00 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_findsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static char	*ft_writenum(char *ptr, int num, int size)
{
	int	sign;

	sign = 1;
	if (num < 0)
	{
		sign *= -1;
		num *= -1;
	}
	ptr[size] = '\0';
	while ((sign == 1 && size >= 0) || (sign == -1 && size > 0))
	{
		size--;
		ptr[size] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		size;

	size = ft_findsize(n);
	if (n == -2147483648)
	{
		new = (char *)malloc(sizeof(char) * 12);
		new = "-2147483648";
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	new = ft_writenum(new, n, size);
	return (new);
}
