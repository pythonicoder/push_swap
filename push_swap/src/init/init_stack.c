/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:58:36 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/26 18:13:54 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_back(t_node **stack, t_node *new)
{
	t_node	*last;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = (*stack)->prev;
	last->next = new;
	new->prev = last;
	new->next = *stack;
	(*stack)->prev = new;
}

void	init_stack_a(t_node **a, char **argv)
{
	int		i;
	long	value;
	t_node	*node;

	i = 1;
	while (argv[i])
	{
		value = ft_atol(argv[i]);
		node = new_node((int)value);
		if (!node)
			error_exit(a);
		stack_add_back(a, node);
		i++;
	}

}
