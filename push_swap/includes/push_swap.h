/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:00:54 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/22 23:00:31 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node		*next;
	struct s_node		*prev;
}	t_node;

t_node	*new_node(int value);
t_node	*pop_node(t_node **stack);
void	stack_add_back(t_node **stack, t_node *new);
void	init_stack_a(t_node **a, char **argv);
void	assign_index(t_node *a);
void	free_stack(t_node **stack);
void	ra(t_node **a);
void	rra(t_node **a);
void	push_node(t_node **stack, t_node *node);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	sort_3(t_node **a);
void	sort_5(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b);
void	sort_dispatcher(t_node **a, t_node **b);
void	bring_to_top(t_node **a, int index);
void	error_exit(t_node **a);
long	ft_atol(const char *s);
int		stack_size(t_node *stack);
int		find_position(t_node *a, int index);
int		is_sorted(t_node *a);
int		check_args(char **argv);
int		max_bit(t_node *a);

#endif
