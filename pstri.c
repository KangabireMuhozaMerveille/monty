#include "monty.h"

/**
 *pstr - PRints the ASCII char equivalent of the top elements
 *
 *@line_number: The current line number of file
 *@stack: The stack
 *Return: void
 */
void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *ptr = *stack;

	while (ptr)
	{
		if (ptr->n <= 0 || ptr->n > 127)
			break;
		putchar((char)ptr->n);
		ptr = ptr->prev;
	}
	putchar('\n');
}
