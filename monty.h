#ifndef _MONTY_H
#define _MONTY_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct mnt_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @line: line content
 * Description: carries values through the program
 */
typedef struct mnt_s
{
	char *arg;
	FILE *file;
	char *line;
}  mnt_t;
extern mnt_t mnt; /* global declaration */


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _free(stack_t *top);
int exec(char *line, stack_t **stack, unsigned int line_no, FILE *file);
void push(stack_t **top, unsigned int line_no);
void pall(stack_t **top, unsigned int line_no  __attribute__((unused)));
void pint(stack_t **top, unsigned int line_no);
void pop(stack_t **top, unsigned int line_no);
void swap(stack_t **top, unsigned int line_no);
void add(stack_t **top, unsigned int line_no);
void nop(stack_t **top __attribute__((unused)), unsigned int line_no __attribute__((unused)));
void sub(stack_t **top, unsigned int line_no);
void mul(stack_t **top, unsigned int line_no);
void m_div(stack_t **top, unsigned int line_no);
void mod(stack_t **top, unsigned int line_no);
void pchar(stack_t **top, unsigned int line_no);
void pstr(stack_t **top, unsigned int line_no);
void rotl(stack_t **top, unsigned int line_no __attribute__((unused)));
void rotr(stack_t **top, unsigned int line_no __attribute__((unused)));
#endif /* monty.h */
