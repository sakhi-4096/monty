#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to the stack pointer.
 *
 * Return: void
 */
void add(stack_t **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Error: can't add, stack too short\n");
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack);
}
