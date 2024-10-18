/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:01:04 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/18 23:01:32 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_findsize(long n)
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

static char	*ft_writenum(char *ptr, long num, int size)
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
	long	num;

	num = (long)n;
	size = ft_findsize(num);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	new = ft_writenum(new, num, size);
	return (new);
}
