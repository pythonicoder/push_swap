/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bring_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:13:02 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 14:15:57 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bring_to_top(t_node **a, int index)
{
	int	pos;
	int	size;

	pos = find_position(*a, index);
//	if (pos == -1)
//		return ;
	size = stack_size(*a);
	if (pos <= size / 2)
	{
		while ((*a)->index != index)
			ra(a);
	}
	else
	{
		while ((*a)->index != index)
			rra(a);
	}
}
