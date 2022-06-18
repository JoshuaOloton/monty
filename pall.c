#include "monty.h"

/**
 * pall - prints all values on the stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void pall(stack_t **top, unsigned int line_no __attribute__((unused)))
{
	stack_t *t;

	t = *top;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
