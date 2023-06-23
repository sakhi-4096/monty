#include "monty.h"

/**
 * pall - prints all elements of the stack, from top of stack
 * @stack: pointer to the pointer stack
 *
 * Return: void
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
