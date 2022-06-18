#include "monty.h"
/**
* exec - executes the opcode
* @line: line
* @stack: top of stack
* @line_no: line number
* @file: poiner to monty file
* Return: int 1 if successful
*/
int exec(char *line, stack_t **stack, unsigned int line_no, FILE *file)
{
	instruction_t opst[] = {
				{"push", push},
				{"pall", pall},
				{NULL, NULL}};
	unsigned int i = 0;
	char *op;

	op = strtok(line, " \t\n");
	if (op && op[0] == '#')
		return (0);
	mnt.arg = strtok(NULL, " \t");
	for (i = 0; op && opst[i].opcode; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_no);
			return (0);
		}
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_no, op);
		fclose(file);
		free(line);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
