#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node	*a;

	a = NULL;
	if (argc < 2)
		return (0);
	init_stack_a(&a, argv);
	return (0);
}
