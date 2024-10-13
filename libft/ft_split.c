/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:39:31 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/13 19:16:28 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numof_words(char const *str, char sep)
{
	size_t	word_counter;

	word_counter = 0;
	if (!str)
		word_counter = 1; //////////???????
	while (*str != '\0')
	{
		if (*(str + 1) != '\0' && *(str + 1) != sep && *str == sep)
			word_counter++;
		str++;
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_numof_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	//ft_write_new(new, s, c);
	return (new);
}
#include <stdio.h>
int	main(void)
{
	char	*name = "yunus";
	printf("%zu\n", ft_numof_words(name, 'e'));
}