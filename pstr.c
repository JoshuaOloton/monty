#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void pstr(stack_t **top __attribute__((unused)), unsigned int line_no
	__attribute__((unused)))
{
	stack_t *t;

	while (t)
	{
		if (t->n <= 0 || t->n > 127)
			break;
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
