#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the stack pointer
 *
 * Return: void
 */
void rotl(stack_t **stack)
{
	stack_t *last = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next != NULL)
		last = last->next;

	last->next = *stack;
	(*stack)->prev = last;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->next = NULL;
}
