/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:48:29 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/17 14:54:18 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		while (len--)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
		while (len--)
			*(d + len) = *(s + len);
	return (dst);
}
