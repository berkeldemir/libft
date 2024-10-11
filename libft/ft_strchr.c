/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:55:58 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/10 21:57:21 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s != c && *s != 0)
        s++;
    if (*s == c)
        return ((char *)s);
    return (NULL);
}

int main(void)
{
    char *a = "berkecan";
    printf("%s\n", strchr(a, '\0'));
    printf("%s\n", ft_strchr(a, '\0'));
}