/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:26:08 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:32:12 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_swap(t_list **list_a, t_list **list_b, int list_size)
{
	if (!sorted_or_not(*list_a) && list_size == 2)
		sa(list_a);
	else if (list_size == 3)
		sort_three(list_a);
	else if (!sorted_or_not(*list_a) && list_size > 3)
		algo(list_a, list_b);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		list_size;

	if (argc < 2)
		return (0);
	if (!is_correct_input(argv))
		error(NULL, NULL);
	list_b = NULL;
	list_a = fill_stack_values(argc, argv);
	list_size = strlen_list(list_a);
	assign_index(list_a, list_size + 1);
	push_swap(&list_a, &list_b, list_size);
	free_list(&list_a);
	free_list(&list_b);
	return (0);
}
