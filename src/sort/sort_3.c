/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:56:38 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 22:04:22 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->prev->index;
	if (first > second && first > third)
		ra(a);
	else if (second > first && second > third)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}
