/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_or_minus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:06:11 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:33:17 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sorted_or_not(t_list *list)
{
	while (list->next != NULL)
	{
		if (list->value > list->next->value)
			return (0);
		list = list->next;
	}
	return (1);
}

static int	highest_index(t_list *list)
{
	int	i;

	i = list->index;
	while (list)
	{
		if (list->index > i)
			i = list->index;
		list = list->next;
	}
	return (i);
}

void	sort_three(t_list **list)
{
	int	highest_i;

	if (sorted_or_not(*list))
		return ;
	highest_i = highest_index(*list);
	if ((*list)->index == highest_i)
		ra(list);
	if ((*list)->next->index == highest_i)
		rra(list);
	if ((*list)->index > (*list)->next->index)
		sa(list);
}
