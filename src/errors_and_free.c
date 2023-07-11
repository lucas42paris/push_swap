/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:30:57 by lsalin            #+#    #+#             */
/*   Updated: 2022/10/05 16:00:59 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_list **list)
{
	t_list	*tmp;

	if (!list || !(*list))
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}

void	error(t_list **list_a, t_list **list_b)
{
	if (list_a == NULL || *list_a != NULL)
		free_list(list_a);
	if (list_b == NULL || *list_b != NULL)
		free_list(list_b);
	write(1, "Error\n", 6);
	exit (1);
}
