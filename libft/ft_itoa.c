/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:01:04 by beldemir          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/17 15:22:55 by beldemir         ###   ########.fr       */
=======
/*   Updated: 2024/10/14 18:45:39 by beldemir         ###   ########.fr       */
>>>>>>> a53062d62ca5470528fcea91928316d5d11be52e
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

	size = ft_findsize(n);
	num = (long)n;
	if (n == -2147483648)
	{
		new = (char *)malloc(sizeof(char) * 12);
		new = "-2147483648";
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	if (n < 0)
		n *= -1;
	new[size] = '\0';
	while (--size >= 0)
	{
		new[size] = (n % 10) + '0';
		n /= 10;
	}
	return (new);
}
int	main(void)
{
	printf("%s", ft_itoa(-21235));
}