#include "monty.h"

/**
 * push - push element on top of stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: new top element
 */
void push(stack_t **top, unsigned int line_no)
{
	stack_t *temp, *t;
	int arg;

	arg = atoi(mnt.arg);
	if (arg == 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_no);
		exit(EXIT_FAILURE);
	}

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return;
	temp->n = arg;
	temp->prev = NULL;
	t = *top;
	temp->next = t;
	if (t)
	{
		t->prev = temp;
	}
	*top = temp;
}
