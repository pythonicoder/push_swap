/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:41:54 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/22 22:45:33 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	has_duplicate(t_node *a)
{
	t_node	*i;
	t_node	*j;

	i = a;
	while (i)
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
