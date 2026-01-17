/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:18:38 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 22:24:33 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_node **a, t_node **b)
{
	int	pushed;

	pushed = 0;
	while (pushed < 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
	sort_3(a);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pb(a, b);
}
