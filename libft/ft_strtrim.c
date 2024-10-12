/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:35:05 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/12 14:19:09 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*toreturn;
	
	toreturn = (char *)calloc(sizeof(char), ft_findnewsize(s1, set));
	
}