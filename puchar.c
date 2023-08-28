#include "monty.h"

/**
 *pchar - PRints the ASCII char equivalent of the top element
 *
 *@line_number: The current line number of file
 *@stack: The stack
 *Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr)
	{
		if (ptr->n >= 0 && ptr->n <= 127)
		{
			fprintf(stdout, "%c\n", ptr->n);
		}
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n",
				line_number);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
