#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include "interpreter.h"

/**
 * interpreter - interprets the Monty bytecode from a file
 * @file: pointer to the file containing Monty bytecode
 */
void interpreter(FILE *file)
{
	char *line = NULL;
	size_t len = 0, line_number = 1;
	ssize_t read;
	stack_t *stack = NULL;

	while ((read = getline(&line, &len, file)) != -1)
	{
		char *opcode = NULL, *value_str = NULL;

		if (line[read - 1] == '\n')
			line[read - 1] = '\0';
		opcode = strtok(line, " "), value_str = strtok(NULL, " ");

		if (opcode != NULL)
		{
			if (strcmp(opcode, "push") == 0 && value_str != NULL)
			{
				int value = atoi(value_str);

				push(&stack, value);
			}
			else if (strcmp(opcode, "pall") == 0)
				pall(&stack);
			else if (strcmp(opcode, "pint") == 0)
				pint(&stack);
			else if (strcmp(opcode, "pop") == 0)
				pop(&stack);
			else if (strcmp(opcode, "swap") == 0)
				swap(&stack);
			else if (strcmp(opcode, "add") == 0)
				add(&stack);
			else if (strcmp(opcode, "nop") == 0)
				nop(&stack);
			else
			{
				fprintf(stderr, "Error: unknown instruction %s\n", opcode);
				exit(EXIT_FAILURE);
			}
		}
		line_number++;
	}
	free(line);
}
