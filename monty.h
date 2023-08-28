#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/* word_count.c */
int countWords(char *input);

/* get_opcode.c */
int get_opcode(char **args, unsigned int line_number, stack_t **stack);

/* push.c */
void push(stack_t **stack, unsigned int line_number);

/* pall.c */
void pall(stack_t **stack, unsigned int line_number);

/* monty.c */
void clean_buffer(char *buffer);
void interpreter(FILE *monty_file);

/* free.c */
void free_stack(stack_t **stack);

/* pint.c */
void pint(stack_t **stack, unsigned int line_number);

/* pop.c */
void pop(stack_t **stack, unsigned int line_number);

/* swap.c */
void swap(stack_t **stack, unsigned int line_number);

/* add.c */
void add(stack_t **stack, unsigned int line_number);

/* nop.c */
void nop(stack_t **stack, unsigned int line_number);

/* sub.c */
void sub(stack_t **stack, unsigned int line_number);

/* div.c */
void divide(stack_t **stack, unsigned int line_number);

/* mul.c */
void mul(stack_t **stack, unsigned int line_number);

/* mod.c */
void mod(stack_t **stack, unsigned int line_number);

/* pchar.c */
void pchar(stack_t **stack, unsigned int line_number);

/* pstr.c */
void pstr(stack_t **stack, unsigned int line_number);

/* rotl.c */
void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)));

/* rotr.c */
void rotr(stack_t **stack, unsigned int line_number __attribute__((unused)));

extern char *op_value;
#endif /* MAIN_H */
