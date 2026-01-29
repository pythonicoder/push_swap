/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:00:16 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 16:56:39 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char    **prepare_args(int argc, char **argv)
{
        char    **args;

        if (argc == 2)
        {
                args = ft_split(argv[1]);
                if (!args || !args[0])
                        return (NULL);
                return (args);
        }
        return (argv + 1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	char	**args;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	args = prepare_args(argc, argv);
	if (!args || !check_args(args))
		return (write(2, "Error\n", 6), 1);
	init_stack_a(&a, args);
	if (has_duplicate(a))
		error_exit(&a);
	assign_index(a);
	if (!is_sorted(a))
		sort_dispatcher(&a, &b);
	free_stack(&a);
	free_stack(&b);
	if (argc == 2)
		free_split(args);
	return (0);
}
