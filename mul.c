#include "monty"

/**
 * mul - multiples second top element with the top element
 * @stack: pointer to the stack pointer
 * @line_number: the line number of the opcode
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int result;
	stack_t *top = NULL, *next = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	next = top->next;
	result = top->n * next->n;

	next->n = result;
	*stack = next;
	next->prev = NULL;

	free(top);
}
