#include "monty.h"

/**
 * sub - subtracts top element from second top element of the stack
 * @top: pointer to top element
 * @line_no: line number
 *
 * Return: void
 */
void sub(stack_t **top, unsigned int line_no)
{
	stack_t *temp;
	int data;

	if ((*top) == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	data = temp->n;
	(*top) = (*top)->next;
	(*top)->n -= data;
	free(temp);
}
