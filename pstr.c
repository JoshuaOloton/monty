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

	while (t)
	{
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
