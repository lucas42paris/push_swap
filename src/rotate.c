/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:09:13 by lsalin            #+#    #+#             */
/*   Updated: 2022/10/05 16:43:06 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tail;

	tmp = *list;
	*list = (*list)->next;
	tail = get_last_element(*list);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ra(t_list **list_a)
{
	rotate(list_a);
	ft_putstr("ra\n");
}

void	rb(t_list **list_b)
{
	rotate(list_b);
	ft_putstr("rb\n");
}

void	rr(t_list **list_a, t_list **list_b)
{
	rotate(list_a);
	rotate(list_b);
	ft_putstr("rr\n");
}
