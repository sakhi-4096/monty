#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top element
 * @stack: double pointer to the top of the stack
 * @line_number: current line number being processed
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n - (*stack)->n;
	pop(stack);
	(*stack)->n = result;
}
