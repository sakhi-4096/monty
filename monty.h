#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queue, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/* Function prototypes */
void push(stack_t **stack, int value);
void pop(stack_t **stack);
void pall(stack_t **stack);
void pint(stack_t **stack);
void swap(stack_t **stack);
void add(stack_t **stack);
void nop(stack_t **stack);
void interpreter(FILE *file);

#endif /* MONTY_H */
