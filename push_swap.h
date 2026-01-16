#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int	value;
	int	index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

t_node	*new_node(int value);
void	stack_add_back(t_node **stack, t_node *new);
void	init_stack_a(t_node **a, char **argv);

#endif
