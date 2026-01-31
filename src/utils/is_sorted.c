/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:24:49 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/22 22:20:28 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *a)
{
	t_node	*start;

	if (!a || a->next == a)
		return (1);
	start = a;
	while (a->next != start)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}
