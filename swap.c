#include "monty.h"

/**
 *swap - Swaps the top two elements of the stack
 *
 *@stack: The stack
 *@line_number: The current line number
 *Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int i;

	if (*stack && (*stack)->prev)
	{
		i = (*stack)->n;
		(*stack)->n = (*stack)->prev->n;
		(*stack)->prev->n = i;
	}
	else
	{
		fprintf(stderr,
			"L%d: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
}
