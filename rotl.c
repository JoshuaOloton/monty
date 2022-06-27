#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void rotl(stack_t **top, unsigned int line_no __attribute__((unused)))
{
	stack_t *t, *temp;

	if (*top && (*top)->next)
	{
		t = temp = *top;
		while (temp->next)
		{
			temp = temp->next;
		}
		(*top) = t->next;
		(*top)->prev = NULL;
		temp->next = t;
		t->prev = temp;
		t->next = NULL;
	}
}
