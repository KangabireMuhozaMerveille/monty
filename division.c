#include "monty.h"

/**
 *divide - Divides the top two elemants of the stack and
 *replaces them with the result
 *
 *@stack: The stack
 *@line_number: The current line number
 *Return: void
 */
void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr && ptr->prev)
	{
		if (ptr->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		ptr->prev->n /= ptr->n;
		ptr->prev->next = NULL;
		*stack = ptr->prev;
		free(ptr);
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
}
