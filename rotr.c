#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the stack pointer
 *
 * Return: void
 */
void rotr(stack_t **stack)
{
	stack_t *last = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next != NULL)
		last = last->next;

	last->prev->next = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
	last->prev = NULL;
}
