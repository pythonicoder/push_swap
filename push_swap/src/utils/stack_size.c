/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:28:19 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/17 21:51:29 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node *stack)
{
	int		count;
	t_node	*tmp;

	if (!stack)
		return (0);
	count = 1;
	tmp = stack->next;
	while (tmp != stack)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
