#include "monty.h"

/**
 * pall - prints everything in stack
 * @stack: doubly linked list
 * @line_number: the line
 *
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
(void)line_number;
print_dlistint(*stack);
}
