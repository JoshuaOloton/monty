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
	int arg, i;

	if (mnt.arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_no);
		free(mnt.line);
		_free(*top);
		fclose(mnt.file);
		exit(EXIT_FAILURE);
	}
	i = 0;
	if (mnt.arg[0] == '-')
		i++;
	for (; mnt.arg[i] && mnt.arg[i] != '\n'; i++)
	{
		if (mnt.arg[i] < 48 || mnt.arg[i] > 57)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_no);
			free(mnt.line);
			_free(*top);
			fclose(mnt.file);
			exit(EXIT_FAILURE);
		}
	}
	arg = atoi(mnt.arg);
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
