#include "monty.h"

/**
 * pint - prints the values on top of the stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void pint(stack_t **top, unsigned int line_no)
{
	if ((*top) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
