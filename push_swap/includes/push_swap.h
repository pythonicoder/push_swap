/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:00:54 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 22:25:50 by skasikci         ###   ########.fr       */
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
void	ra(t_node **a);
void	push_node(t_node **stack, t_node *node);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	bring_to_top(t_node **a, int index);
int		stack_size(t_node *stack);
int		find_position(t_node *a, int index);

#endif
