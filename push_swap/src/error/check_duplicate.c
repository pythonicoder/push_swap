/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:41:54 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/26 17:55:37 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicate(t_node *a)
{
	t_node	*i;
	t_node	*j;

	if (!a)
		return (0);
	i = a;
	while (1)
	{
		j = i->next;
		while (j && j != a)
		{
			if (i->value == j->value)
				return (1);
			j = j->next;
		}
		i = i->next;
		if (i == a)
			break ;
	}
	return (0);
}
