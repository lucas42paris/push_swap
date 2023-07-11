/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:01:38 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:32:39 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	pa(t_list **list_a, t_list **list_b)
{
	push(list_b, list_a);
	ft_putstr("pa\n");
}

void	pb(t_list **list_a, t_list **list_b)
{
	push(list_a, list_b);
	ft_putstr("pb\n");
}
