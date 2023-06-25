#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @stack: pointer to the stack pointer
 * @value: the value to be pushed
 * @line_number: line number of the push operation
 *
 * Return: void
 */
void push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	(void)(line_number);

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
