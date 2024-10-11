/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:00:00 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/11 04:59:36 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*toreturn;

	slen = ft_strlen((char *)s);
	i = 0;
	if (len == 0 || start >= slen)
		return ((char *)malloc(1));
	if (len > (slen - (size_t)start))
		len = slen - (size_t)start;
	toreturn = (char *)malloc(len + 1);
	if (!toreturn)
    	return (NULL);
	while (i < len)
	{
		toreturn[i] = s[start + i];
		i++;
	}
	toreturn[i] = '\0';
	return (toreturn);
}

int	main(void)
{
	printf("%s\n", ft_substr("berk eldemir", 5, 3));
}