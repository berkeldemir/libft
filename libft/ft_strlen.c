/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:01:29 by beldemir          #+#    #+#             */
/*   Updated: 2024/09/21 13:42:44 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str)
{
    int len;

    len = 0;
    if (str == NULL)
        return (0);
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return (len);
}