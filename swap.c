#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack pointer
 * @line_number: line number of the swap operation
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;
	stack_t *next = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	next = top->next;

	top->next = next->next;
	if (next->next != NULL)
		next->next->prev = top;
	next->prev = NULL;
	next->next = top;
	top->prev = next;

	*stack = next;
}
