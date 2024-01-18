#include "monty.h"
/**
 * op_pop - removes the top element of the stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_pop(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
stack_t *tmp = *stack;
*stack = (*stack)->next;
free(tmp);
if (*stack != NULL)
(*stack)->prev = NULL;
}
