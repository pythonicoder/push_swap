/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:24:07 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 22:47:46 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*node;

	node = pop_node(a);
	if (!node)
		return ;
	push_node(b, node);
	write(1, "pb\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*node;

	node = pop_node(b);
	if (!node)
		return ;
	push_node(a, node);
	write(1, "pa\n", 3);
}
