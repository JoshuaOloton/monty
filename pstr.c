#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void pstr(stack_t **top, unsigned int line_no)
{
	stack_t *t;

	if ((*top) == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	t = (*top);
	while (t)
	{
		if (t->n <= 0 || t->n > 127)
			break;
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
