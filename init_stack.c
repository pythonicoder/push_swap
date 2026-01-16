#include "push_swap.h"

void	stack_add_back(t_node **stack, t_node *new)
{
	t_node	*last;

	if (!*stack)
	{
		*stack = new;
		return;
	}
	last = (*stack)->prev;
	last->next = new;
	new->prev = last;
	new->next = *stack;
	(*stack)->prev = new;
}

void	init_stack_a(t_node **a, char **argv)
{
	int	i;
	t_node	*node;

	i = 1;
	while (argv[i])
	{
		node = new_node(atoi(argv[i]));
		if (!node)
			return;
		stack_add_back(a, node);
		i++;
	}
}
