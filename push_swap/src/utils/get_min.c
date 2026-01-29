/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:25:39 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 14:35:19 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min_index(t_node *a)
{
	t_node	*start;
	int		min;
	
	if (!a)
		return (-1);
	start = a;
	min = a->index;
	a = a->next;
	while (a != start)
	{
		if (a->index < min)
			min = a->index;
		a = a->next;
	}
	return (min);
}
