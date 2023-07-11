/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:03:31 by lsalin            #+#    #+#             */
/*   Updated: 2022/10/05 11:45:46 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_list	*list)
{
	int	tmp;

	if (list == NULL && list->next == NULL)
		return ;
	tmp = list->value;
	list->value = list->next->value;
	list->next->value = tmp;
	tmp = list->index;
	list->index = list->next->index;
	list->next->index = tmp;
}

void	sa(t_list **list_a)
{
	swap(*list_a);
	ft_putstr("sa\n");
}

void	sb(t_list **list_b)
{
	swap(*list_b);
	ft_putstr("sb\n");
}

void	ss(t_list **list_a, t_list **list_b)
{
	swap(*list_a);
	swap(*list_b);
	ft_putstr("ss\n");
}
