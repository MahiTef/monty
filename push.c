#include "monty.h"

/**
 * push - adds data to the top of the stack
 * breaks string into series of tokens using delimeter
 * @stack: indicating a doubly linkedlist
 * @line_number: the number line
 *
 * Description: check paraams params variable against input strings
 * then, locate stack beased on the order of input arguements
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
register int num;
char *params = strtok(NULL, "\n");

if (check_string(params) == -1)
{
fprintf(stderr, "L%u: usage push integer \n", line_number);
cleaner();
exit(EXIT_FAILURE);
}
num = atoi(params);
if (args.order == 1)
{
add_dnodeint(stack, num);
}
else
{
add_dnodeint_end(stack, num);
}
}
