#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the stack pointer
 * @line_number: current line number being processed
 *
 * Return: void
 */
void pstr(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL && current->n != 0 && (current->n >= 0 && current->n <= 127))
	{
		if (isprint(current->n))
			putchar(current->n);
		else
			break;
		current = current->next;
	}

	putchar('\n');
}
