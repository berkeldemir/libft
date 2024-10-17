/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:17:46 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/16 16:07:16 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		(f)(i, &str[i]);
		i++;
	}
}
