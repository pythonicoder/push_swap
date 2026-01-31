/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:06:48 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 14:19:33 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_dispatcher(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size <= 1 || is_sorted(*a))
		return ;
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size <= 5)
		sort_5(a, b);
	else
		radix_sort(a, b);
}
