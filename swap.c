#include "monty.h"

/**
 * swap - prints all values on the stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void swap(stack_t **top, unsigned int line_no)
{
	stack_t *temp, *after;

	if ((*top) == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	(*top) = (*top)->next;
	after = (*top)->next;
	(*top)->prev = NULL;
	(*top)->next = temp;
	temp->prev = (*top);
	temp->next = after;
	if (after)
		after->prev = temp;
}
