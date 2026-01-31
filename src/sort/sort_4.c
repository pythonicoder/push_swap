/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 22:24:51 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/30 22:24:54 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_node **a, t_node **b)
{
	int	min_pos;

	min_pos = find_min_pos(*a);
	if (min_pos == 1)
		sa(a);
	else if (min_pos == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_pos == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}
