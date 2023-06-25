#include "monty.h"

/**
 * mul - multiples second top element with the top element
 * @stack: pointer to the stack pointer
 * @line_number: the line number of the opcode
 *
 * Return: void
 */
void mull(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = result;
}
