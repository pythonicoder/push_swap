/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:00:16 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/26 17:53:39 by skasikci         ###   ########.fr       */
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
	if (!check_args(argv))
		return (write(2, "Error\n", 6), 1);
	init_stack_a(&a, argv);
	if (has_duplicate(a))
		error_exit(&a);
	assign_index(a);
	if (!is_sorted(a))
		sort_dispatcher(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
