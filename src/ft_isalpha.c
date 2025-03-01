/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:35:45 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/13 15:16:17 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((i <= 'Z' && i >= 'A') || (i <= 'z' && i >= 'a'))
		return (1);
	return (0);
}
