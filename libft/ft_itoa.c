/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:01:04 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/15 14:31:45 by beldemir         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*new;
	int		size;
	long	num;

	size = ft_findsize(n);
	num = (long)n;
	if (n == -2147483648)
	{
		new = (char *)malloc(sizeof(char) * 12);
		new = "-2147483648";
		return (new);
	}
	if (n < 0)
		num *= -1;
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (--size >= 0)
	{
		new[size] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		new[0] = '-';
	return (new);
}
