/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:50:00 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/14 18:50:30 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
#include <stdio.h>
int main(void)
{
	int a[10] = {7, 770, 2005, 0, -404059};
	int b[] = {214, 3215, 5325, 5246};
	ft_memcpy(b, a, 20);
	printf("%i\n%i\n%i", b[3], b[4], b[0]);
}
