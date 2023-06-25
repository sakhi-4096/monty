#include "monty.h"
#include "interpreter.h"

/**
 * mod - computes the rest of the division of the second top element and top 
 * @stack: pointer to the top of the stack
 * @line_number: the line number of the opcode
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n % (*stack)->n;
	(*stack)->n = result;
	pop(stack, line_number);
}
