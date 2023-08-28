#include "monty.h"

/**
 *add - Adds the top two elemants of the stack and
 *replaces them with the result
 *
 *@stack: The stack
 *@line_number: The current line number
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr && ptr->prev)
	{
		ptr->prev->n += ptr->n;
		ptr->prev->next = NULL;
		*stack = ptr->prev;
		free(ptr);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
}
