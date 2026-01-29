/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:05:27 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 15:56:23 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_node *a, int index)
{
	t_node	*start;
	int		pos;

	if (!a)
		return (-1);
	start = a;
	pos = 0;
	while (a->index != index)
	{
		a = a->next;
		pos++;
		if (a == start)
			return (-1);
	}
	return (pos);
}
