/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_bit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:34:04 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 21:51:12 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit(t_node *a)
{
	t_node	*start;
	int		max;
	int		bit;

	if (!a)
		return (0);
	start = a;
	max = a->index;
	a = a->next;
	while (a != start)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	bit = 0;
	while ((max >> bit) != 0)
		bit++;
	return (bit);
}
