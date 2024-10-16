/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:39:31 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/15 14:21:50 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char sep)
{
	int	word_counter;

	word_counter = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*(str + 1) != '\0' && *(str + 1) != sep && *str == sep)
			word_counter++;
		str++;
	}
	return (word_counter);
}

static int	ft_wordlen(char const *s, char sep)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s != '\0' && *s != sep)
	{
		count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char sep)
{
	char	**new;
	int		i;
	int		j;
	int		words_count;

	i = 0;
	j = 0;
	words_count = ft_count_words(s, sep);
	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!new)
		return (NULL);
	while (i <= words_count)
	{
		while (s[j] == sep)
			j++;
		new[i] = ft_substr(s, j, ft_wordlen(&s[j], sep));
		if (!new[i])
			return (NULL);
		j += ft_wordlen(&s[j], sep);
		i++;
	}
	return (new);
}
