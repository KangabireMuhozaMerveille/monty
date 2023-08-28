#include "monty.h"

/**
 *rotl - Rotates the stack to the top
 *
 *@line_number: the current line number
 *@stack: The stack
 *Return: void
 */
void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *ptr = *stack;

	if (ptr && ptr->prev)
	{
		while (ptr->prev)
		{
			ptr = ptr->prev;
		}
		ptr->prev = *stack;
		(*stack)->next = ptr;
		ptr = (*stack)->prev;
		(*stack)->prev = NULL;
		ptr->next = NULL;
		*stack = ptr;
	}
}
