#include "monty.h"

/**
 * pint - print the value at the top of stack followed by new line
 * @stack: pointer to the stack pointer
 * @line_number: line number of the pint operation
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
