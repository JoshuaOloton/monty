#include "monty.h"

/**
 * pop - removes element on top of stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: new top element
 */
void pop(stack_t **top, unsigned int line_no)
{
	stack_t *temp;

	if ((*top) == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		exit(EXIT_FAILURE);
	}
	temp = (*top);
	(*top) = (*top)->next;
	if (*top)
		(*top)->prev = NULL;
	free(temp);
}
