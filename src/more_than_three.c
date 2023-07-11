/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_than_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:48:43 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:32:19 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_all_except_three(t_list **list_a, t_list **list_b)
{
	int	list_size;
	int	pushed;
	int	i;

	list_size = strlen_list(*list_a);
	pushed = 0;
	i = 0;
	while (list_size > 6 && i < list_size && pushed < list_size / 2)
	{
		if ((*list_a)->index <= list_size / 2)
		{
			pb(list_a, list_b);
			pushed++;
		}
		else
			ra(list_a);
		i++;
	}
	while (list_size - pushed > 3)
	{
		pb(list_a, list_b);
		pushed++;
	}
}

static void	last_sort_a(t_list **list_a)
{
	int	lowest_pos;
	int	list_size;

	list_size = strlen_list(*list_a);
	lowest_pos = get_lowest_index_position(list_a);
	if (lowest_pos > list_size / 2)
	{
		while (lowest_pos < list_size)
		{
			rra(list_a);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ra(list_a);
			lowest_pos--;
		}
	}
}

void	algo(t_list **list_a, t_list **list_b)
{
	push_all_except_three(list_a, list_b);
	sort_three(list_a);
	while (*list_b)
	{
		assign_target_position(list_a, list_b);
		cost(list_a, list_b);
		cheapest_move(list_a, list_b);
	}
	if (!sorted_or_not(*list_a))
		last_sort_a(list_a);
}
