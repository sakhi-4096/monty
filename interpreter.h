#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "monty.h"

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, size_t line_number);
} instruction_t;

/* Function prototypes */
void executeInstruction(char *opcode, stack_t **stack, size_t line_number);

#endif /* INTERPRETER_H */
