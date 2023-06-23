#include "monty.h"

/**
 * pop - pops an element from the stack
 * @stack: pointer to the stack pointer
 *
 * Return: void
 */
void pop(stack_t **stack)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "Error: can't pop an empty stack\n");
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
