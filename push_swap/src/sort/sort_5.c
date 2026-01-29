/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:18:38 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 14:31:17 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_node **a, t_node **b)
{
	int	size;
	int	min;

	size = stack_size(*a); 
	while (size > 3)
	{
		min = get_min_index(*a);
		bring_to_top(a, min);
		pb(a, b);
		size--;
	}
	sort_3(a);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}
