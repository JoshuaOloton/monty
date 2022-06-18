#ifndef _L_H
#define _L_H

void push(stack_t **top, unsigned int line_no);
void pall(stack_t **top, unsigned int line_no);
void pint(stack_t **top, unsigned int line_no);
void pop(stack_t **top, unsigned int line_no);
void swap(stack_t **top, unsigned int line_no);
void add(stack_t **top, unsigned int line_no);
void nop(stack_t **top, unsigned int line_no);
void sub(stack_t **top, unsigned int line_no);
void divd(stack_t **top, unsigned int line_no);
void mul(stack_t **top, unsigned int line_no);
void mod(stack_t **top, unsigned int line_no);
void pchar(stack_t **top, unsigned int line_no);
void pstr(stack_t **top, unsigned int line_no);
void rotl(stack_t **top, unsigned int line_no);
void rotr(stack_t **top, unsigned int line_no);
void f_queue(stack_t **top, unsigned int line_no);
void f_stack(stack_t **top, unsigned int line_no);

#endif
