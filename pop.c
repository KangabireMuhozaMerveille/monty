#include "monty.h"

/**
 *pop - Removes the top element of the stack
 *
 *@stack: The stack
 *@line_number: The current line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (*stack)
	{
		ptr = *stack;
		*stack = (*stack)->prev;
		if (*stack)
			(*stack)->next = NULL;
		free(ptr);
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
