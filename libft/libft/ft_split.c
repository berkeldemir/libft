/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:39:31 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/21 14:04:04 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	if (sep == '\0')
		return (1);
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
	char	**words;
	size_t	word_len;
	size_t	i;

	i = 0;
	words = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (words == NULL)
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
			words[i] = ft_substr(s, 0, word_len);
			i++;
			s += word_len;
		}
	}
	words[i] = NULL;
	return (words);
}
