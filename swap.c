#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack pointer
 *
 * Return: void
 */
void swap(stack_t **stack)
{
	stack_t *top = *stack;
	stack_t *next = top->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Error: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}

	top->next = next->next;
	if (next->next != NULL)
		next->next->prev = top;
	next->prev = NULL;
	next->next = top;
	top->prev = next;

	*stack = next;
}
