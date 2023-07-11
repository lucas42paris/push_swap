/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:22:02 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:32:04 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*get_last_element(t_list *list)
{
	while (list && list->next != NULL)
		list = list ->next;
	return (list);
}

t_list	*get_before_last_element(t_list *list)
{
	while (list && list->next && list->next->next != NULL)
		list = list->next;
	return (list);
}

t_list	*new_list(int value)
{
	t_list	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

void	add_element_bottom(t_list **list, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	tail = get_last_element(*list);
	tail->next = new;
}

int	strlen_list(t_list *list)
{
	int	i;

	i = 0;
	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
