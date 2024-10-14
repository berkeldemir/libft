/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:20:31 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/14 17:34:41 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}



// 9876
#include <stdio.h>
int main()
{
	int a[] = {1,2,3};
	ft_memset(a, 38, 2); 
	ft_memset(a, 148, 1);
	printf("%i\n", a[0]);
}
