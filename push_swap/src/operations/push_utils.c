/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:41:31 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 14:06:00 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*pop_node(t_node **stack)
{
	t_node	*node;

	if (!stack || !*stack)
		return (NULL);
	node = *stack;
	if (node->next == node)
		*stack = NULL;
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		*stack = node->next;
	}
	node->next = node;
	node->prev = node;
	return (node);
}

void	push_node(t_node **stack, t_node *node)
{
	if (!node)
		return ;
	if (!*stack)
	{
		node->next = node;
		node->prev = node;
		*stack = node;
	}
	else
	{
		node->next = *stack;
		node->prev = (*stack)->prev;
		(*stack)->prev->next = node;
		(*stack)->prev = node;
		*stack = node;
	}
}
