/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:47:44 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 13:58:25 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_node *a)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	current = a;
	while (current)
	{
		index = 0;
		compare = a;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
			if (compare == a)
				break ;
		}
		current->index = index;
		current = current->next;
		if (current == a)
			break ;
	}
}
