#include "monty.h"

/**
 * rotr - rotates the stack to the top.
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void rotr(stack_t **top, unsigned int line_no __attribute__((unused)))
{
	stack_t *t, *temp, *ptemp;

	if (*top && (*top)->next)
	{
		t = temp = *top;
		while (temp->next)
		{
			temp = temp->next;
		}
		ptemp = temp->prev;
		(*top) = temp;
		(*top)->prev = NULL;
		(*top)->next = t;
		t->prev = (*top);
		ptemp->next = NULL;
	}
}
