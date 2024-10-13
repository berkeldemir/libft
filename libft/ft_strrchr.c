/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:06:09 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/13 15:29:46 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastonefound;

	lastonefound = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			lastonefound = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (lastonefound);
}
