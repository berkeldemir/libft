/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@k1m23s10.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:58:27 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/07 13:09:12 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    long    i;
    long    num;
    int     isneg;
    
    i = 0;
    num = 0;
    isneg = 1;
    while (str[i] != '\0' && (str[i] == 32 || (str[i] <= 13 && str[i] >= 9)))
        i++;
    
    if (str[i] != '\0' && str[i] == '-')
    {
        isneg *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
        num = (num * 10) + (str[i] - 48);
    return (num * isneg);
}