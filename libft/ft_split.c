/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:39:31 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/18 22:32:19 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	if (sep == 0)
		return (0);
	while (*s)
	{
		if (*s != sep && (*(s + 1) == sep || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	word_len;
	size_t	i;

	i = 0;
	buffer = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (buffer == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			buffer[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	buffer[i] = NULL;
	return (buffer);
}
