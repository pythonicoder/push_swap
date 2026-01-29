/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:48:08 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/22 21:15:49 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **stack)
{
	int	tmp_value;
	int	tmp_index;

	if (!stack || !*stack || (*stack)->next == *stack)
		return ;
	tmp_value = (*stack)->value;
	tmp_index = (*stack)->index;
	(*stack)->value = (*stack)->next->value;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->value = tmp_value;
	(*stack)->next->index = tmp_index;
}

void	sa(t_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}
