/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:58:52 by lsalin            #+#    #+#             */
/*   Updated: 2023/07/11 11:31:11 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list	t_list;

struct	s_list
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	t_list			*next;
};

// linked list functions
t_list		*get_last_element(t_list *list);
t_list		*get_before_last_element(t_list *list);
t_list		*new_list(int value);
void		add_element_bottom(t_list **list, t_list *new);
int			strlen_list(t_list *list);

// list initialization functions
t_list		*fill_stack_values(int argc, char **argv);
void		assign_index(t_list *list_a, int list_size);

// swap functions
void		sa(t_list **list_a);
void		sb(t_list **list_b);
void		ss(t_list **list_a, t_list **list_b);

// push functions
void		pa(t_list **list_a, t_list **list_b);
void		pb(t_list **list_a, t_list **list_b);

// rotate functions
void		ra(t_list **list_a);
void		rb(t_list **list_b);
void		rr(t_list **list_a, t_list **list_b);

// reverse rotate functions
void		rra(t_list **list_a);
void		rrb(t_list **list_b);
void		rrr(t_list **list_a, t_list **list_b);

// position functions
int			get_lowest_index_position(t_list **list);
void		assign_target_position(t_list **list_a, t_list **list_b);

// cost functions
void		cost(t_list **list_a, t_list **list_b);
void		cheapest_move(t_list **list_a, t_list **list_b);

// three or minus algo
int			sorted_or_not(t_list *list);
void		sort_three(t_list **list);

// more than three algo
void		algo(t_list **list_a, t_list **list_b);

// moves functions
void		move(t_list **list_a, t_list **list_b, int cost_a, int cost_b);

// argument handling functions
int			is_correct_input(char **argv);
int			nbr_strcmp(const char *s1, const char *s2);

// utils functions
void		ft_putstr(char *str);
int			is_sign(char c);
int			is_digit(char c);
int			abs_val(int nbr);
long int	ft_atoi(const char *str);
void		free_list(t_list **list);
void		error(t_list **list_a, t_list **list_b);

#endif