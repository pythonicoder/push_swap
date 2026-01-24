/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:00:16 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/22 23:25:18 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	init_stack_a(&a, argv);
	assign_index(a);
	if (!is_sorted(a))
		sort_dispatcher(&a, &b);
	if (has_duplicate(*a))
		error_exit(a);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
