/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:42:57 by lsalin            #+#    #+#             */
/*   Updated: 2022/10/05 16:41:56 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tail;
	t_list	*before_tail;

	tail = get_last_element(*list);
	before_tail = get_before_last_element(*list);
	tmp = *list;
	*list = tail;
	(*list)->next = tmp;
	before_tail->next = NULL;
}

void	rra(t_list **list_a)
{
	reverse_rotate(list_a);
	ft_putstr("rra\n");
}

void	rrb(t_list **list_b)
{
	reverse_rotate(list_b);
	ft_putstr("rrb\n");
}

void	rrr(t_list **list_a, t_list **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	ft_putstr("rrr\n");
}
