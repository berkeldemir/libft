/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:01:04 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/13 20:46:01 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_findsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
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

static void	ft_writenew(int	n, char **str)
{
	int	sign;
	int	i;
	int	temp;
	
	sign = 1;
	i = 0;
	if (n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	while (n > 0)
}

char	*ft_itoa(int n)
{
	char	*new;
	int		index;
	int		size;
	
	size = ft_findsize(n);
	index = 0;
	if (n == 0)
	{
		new = (char *)malloc(2);
		new = "0";
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_writenew(n, &new, size);
	return (new);
}

int	main(void)
{
	int	n;

	n = -12982;
	printf("%i\n%i\n%s\n", ft_findsize(n), n, ft_itoa(n));
}