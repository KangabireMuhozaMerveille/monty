#include "monty.h"

/**
 *pint - Prints the value at the top of the stack
 *
 *@stack: The stack
 *@line_number: The current line number
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		fprintf(stdout, "%d\n", (*stack)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
