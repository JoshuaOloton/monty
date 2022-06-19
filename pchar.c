#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void pchar(stack_t **top, unsigned int line_no)
{
	if ((*top) == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	if ((*top)->n < 0 || (*top)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_no);
		exit(EXIT_FAILURE);
	}	
	printf("%c\n", (*top)->n);
}
