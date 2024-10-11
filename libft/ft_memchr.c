/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:48:39 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/11 16:50:28 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	
	str = (char *)s;
	i = 0;
	while(i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return(&s[i]); // emin değilim, pasqal (char *)s + i return etmiş ama bence bu da makuldur?
		else
			i++;
	}
	return (NULL);
}