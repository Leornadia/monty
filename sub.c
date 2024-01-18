#include "monty.h"
/**
 * op_sub - subtracts the top element of the stack
 *         from the second top element of the stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_sub(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
int diff = (*stack)->next->n - (*stack)->n;
pop(stack, line_number);
(*stack)->n = diff;
}
/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the stack
 * @line_number: current instruction line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
*stack = (*stack)->next;
free(tmp);
if (*stack != NULL)
{
(*stack)->prev = NULL;
}
}
