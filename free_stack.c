#include "monty.h"

/**
 * free_stack - iterate through the stack free memory
 * @stack: pointer to the stack pointer
 *
 * Description: The function iterates through the stack, starting
 * from the top, and frees each node.
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
