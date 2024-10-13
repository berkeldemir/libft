/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:00:00 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/13 15:30:55 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*new;

	slen = ft_strlen((char *)s);
	i = 0;
	if (len == 0 || start >= slen)
		return ((char *)malloc(1));
	if (len > (slen - (size_t)start))
		len = slen - (size_t)start;
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
