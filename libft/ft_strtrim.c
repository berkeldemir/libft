/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:35:05 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/11 23:21:55 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

// EĞER KARAKTER BULUNURSA 0, BULUNAMAZSA 1 DÖNDÜRÜYOR

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    size_t  memsize;
    size_t  i;

    memsize = 1;
    i = 0;
    while (s1[i])
        if(ft_isset(set[i], set))
}