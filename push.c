#include "monty.h"
/**
 * push - pushes an integer onto the stack
 * @stack: double pointer to the stack
 * @line_number: line number of where instruction occurs
*/
void push(stack_t **stack, unsigned int line_number)
{
int n;
if (/* condition */)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
n = atoi(/* argument */);
}
/**
* pall - prints all values on the stack
* @stack: double pointer to top node
* @line_number: line number, ignored
*/
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;
current = *stack;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
