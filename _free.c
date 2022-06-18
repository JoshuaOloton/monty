#include "monty.h"

/**
* _free - frees a doubly linked list
* @top: head of the stack
*/
void _free(stack_t *top)
{
	stack_t *temp;

	while (top)
	{
		temp = top->next;
		free(top);
		top = temp;
	}
}
