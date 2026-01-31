/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 22:27:39 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/30 22:27:41 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_node *a)
{
	t_node	*start;
	int		min_index;
	int		pos;
	int		i;

	start = a;
	min_index = a->index;
	pos = 0;
	i = 0;
	while (a->next != start)
	{
		if (a->index < min_index)
		{
			min_index = a->index;
			pos = i;
		}
		a = a->next;
		i++;
	}
	if (a->index < min_index)
		pos = i;
	return (pos);
}
