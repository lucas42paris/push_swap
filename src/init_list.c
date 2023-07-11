/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:12:25 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:31:37 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*fill_stack_values(int argc, char **argv)
{
	t_list		*list_a;
	long int	nbr;
	int			i;

	list_a = NULL;
	nbr = 0;
	i = 1;
	while (i < argc)
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error(&list_a, NULL);
		if (i == 1)
			list_a = new_list((int)nbr);
		else
			add_element_bottom(&list_a, new_list((int)nbr));
		i++;
	}
	return (list_a);
}

void	assign_index(t_list *list_a, int list_size)
{
	t_list	*current;
	t_list	*highest;
	int		value;

	while (--list_size > 0)
	{
		current = list_a;
		value = INT_MIN;
		highest = NULL;
		while (current)
		{
			if (current->value == INT_MIN && current->index == 0)
				current->index = 1;
			if (current->value > value && current->index == 0)
			{
				value = current->value;
				highest = current;
				current = list_a;
			}
			else
				current = current->next;
		}
		if (highest != NULL)
			highest->index = list_size;
	}
}
