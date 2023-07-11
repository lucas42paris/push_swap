/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:01:53 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:32:28 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate_both(t_list **list_a, t_list **list_b,
										int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(list_a, list_b);
	}
}

static void	rotate_both(t_list **list_a, t_list **list_b,
								int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(list_a, list_b);
	}
}

static void	rotate_a(t_list **list_a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(list_a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(list_a);
			(*cost)++;
		}
	}
}

static void	rotate_b(t_list **list_b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rb(list_b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rrb(list_b);
			(*cost)++;
		}
	}
}

void	move(t_list **list_a, t_list **list_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		reverse_rotate_both(list_a, list_b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rotate_both(list_a, list_b, &cost_a, &cost_b);
	rotate_a(list_a, &cost_a);
	rotate_b(list_b, &cost_b);
	pa(list_a, list_b);
}
