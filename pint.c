#include "monty.h"

/**
 * pint - print the value at the top of stack followed by new line
 * @stack: pointer to the stack pointer
 *
 * Return: void
 */
void pint(stack_t **stack)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "Error: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
