/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:51:59 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/19 02:01:42 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	new_item;

	new_item = (t_list)malloc(sizeof(t_list));
	if (!new_item)
		return (NULL);
	new_item->content = content;
	new_item->next = NULL;
	return (new_item);
}
